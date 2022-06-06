// Code generated by entc, DO NOT EDIT.

package ent

import (
	"context"
	"fmt"
	"log"

	"github.com/google/uuid"
	"github.com/hominsu/bugu/app/bugu/service/internal/data/ent/migrate"

	"github.com/hominsu/bugu/app/bugu/service/internal/data/ent/artifact"
	"github.com/hominsu/bugu/app/bugu/service/internal/data/ent/file"
	"github.com/hominsu/bugu/app/bugu/service/internal/data/ent/user"

	"entgo.io/ent/dialect"
	"entgo.io/ent/dialect/sql"
	"entgo.io/ent/dialect/sql/sqlgraph"
)

// Client is the client that holds all ent builders.
type Client struct {
	config
	// Schema is the client for creating, migrating and dropping schema.
	Schema *migrate.Schema
	// Artifact is the client for interacting with the Artifact builders.
	Artifact *ArtifactClient
	// File is the client for interacting with the File builders.
	File *FileClient
	// User is the client for interacting with the User builders.
	User *UserClient
}

// NewClient creates a new client configured with the given options.
func NewClient(opts ...Option) *Client {
	cfg := config{log: log.Println, hooks: &hooks{}}
	cfg.options(opts...)
	client := &Client{config: cfg}
	client.init()
	return client
}

func (c *Client) init() {
	c.Schema = migrate.NewSchema(c.driver)
	c.Artifact = NewArtifactClient(c.config)
	c.File = NewFileClient(c.config)
	c.User = NewUserClient(c.config)
}

// Open opens a database/sql.DB specified by the driver name and
// the data source name, and returns a new client attached to it.
// Optional parameters can be added for configuring the client.
func Open(driverName, dataSourceName string, options ...Option) (*Client, error) {
	switch driverName {
	case dialect.MySQL, dialect.Postgres, dialect.SQLite:
		drv, err := sql.Open(driverName, dataSourceName)
		if err != nil {
			return nil, err
		}
		return NewClient(append(options, Driver(drv))...), nil
	default:
		return nil, fmt.Errorf("unsupported driver: %q", driverName)
	}
}

// Tx returns a new transactional client. The provided context
// is used until the transaction is committed or rolled back.
func (c *Client) Tx(ctx context.Context) (*Tx, error) {
	if _, ok := c.driver.(*txDriver); ok {
		return nil, fmt.Errorf("ent: cannot start a transaction within a transaction")
	}
	tx, err := newTx(ctx, c.driver)
	if err != nil {
		return nil, fmt.Errorf("ent: starting a transaction: %w", err)
	}
	cfg := c.config
	cfg.driver = tx
	return &Tx{
		ctx:      ctx,
		config:   cfg,
		Artifact: NewArtifactClient(cfg),
		File:     NewFileClient(cfg),
		User:     NewUserClient(cfg),
	}, nil
}

// BeginTx returns a transactional client with specified options.
func (c *Client) BeginTx(ctx context.Context, opts *sql.TxOptions) (*Tx, error) {
	if _, ok := c.driver.(*txDriver); ok {
		return nil, fmt.Errorf("ent: cannot start a transaction within a transaction")
	}
	tx, err := c.driver.(interface {
		BeginTx(context.Context, *sql.TxOptions) (dialect.Tx, error)
	}).BeginTx(ctx, opts)
	if err != nil {
		return nil, fmt.Errorf("ent: starting a transaction: %w", err)
	}
	cfg := c.config
	cfg.driver = &txDriver{tx: tx, drv: c.driver}
	return &Tx{
		ctx:      ctx,
		config:   cfg,
		Artifact: NewArtifactClient(cfg),
		File:     NewFileClient(cfg),
		User:     NewUserClient(cfg),
	}, nil
}

// Debug returns a new debug-client. It's used to get verbose logging on specific operations.
//
//	client.Debug().
//		Artifact.
//		Query().
//		Count(ctx)
//
func (c *Client) Debug() *Client {
	if c.debug {
		return c
	}
	cfg := c.config
	cfg.driver = dialect.Debug(c.driver, c.log)
	client := &Client{config: cfg}
	client.init()
	return client
}

// Close closes the database connection and prevents new queries from starting.
func (c *Client) Close() error {
	return c.driver.Close()
}

// Use adds the mutation hooks to all the entity clients.
// In order to add hooks to a specific client, call: `client.Node.Use(...)`.
func (c *Client) Use(hooks ...Hook) {
	c.Artifact.Use(hooks...)
	c.File.Use(hooks...)
	c.User.Use(hooks...)
}

// ArtifactClient is a client for the Artifact schema.
type ArtifactClient struct {
	config
}

// NewArtifactClient returns a client for the Artifact from the given config.
func NewArtifactClient(c config) *ArtifactClient {
	return &ArtifactClient{config: c}
}

// Use adds a list of mutation hooks to the hooks stack.
// A call to `Use(f, g, h)` equals to `artifact.Hooks(f(g(h())))`.
func (c *ArtifactClient) Use(hooks ...Hook) {
	c.hooks.Artifact = append(c.hooks.Artifact, hooks...)
}

// Create returns a create builder for Artifact.
func (c *ArtifactClient) Create() *ArtifactCreate {
	mutation := newArtifactMutation(c.config, OpCreate)
	return &ArtifactCreate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// CreateBulk returns a builder for creating a bulk of Artifact entities.
func (c *ArtifactClient) CreateBulk(builders ...*ArtifactCreate) *ArtifactCreateBulk {
	return &ArtifactCreateBulk{config: c.config, builders: builders}
}

// Update returns an update builder for Artifact.
func (c *ArtifactClient) Update() *ArtifactUpdate {
	mutation := newArtifactMutation(c.config, OpUpdate)
	return &ArtifactUpdate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOne returns an update builder for the given entity.
func (c *ArtifactClient) UpdateOne(a *Artifact) *ArtifactUpdateOne {
	mutation := newArtifactMutation(c.config, OpUpdateOne, withArtifact(a))
	return &ArtifactUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOneID returns an update builder for the given id.
func (c *ArtifactClient) UpdateOneID(id uuid.UUID) *ArtifactUpdateOne {
	mutation := newArtifactMutation(c.config, OpUpdateOne, withArtifactID(id))
	return &ArtifactUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// Delete returns a delete builder for Artifact.
func (c *ArtifactClient) Delete() *ArtifactDelete {
	mutation := newArtifactMutation(c.config, OpDelete)
	return &ArtifactDelete{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// DeleteOne returns a delete builder for the given entity.
func (c *ArtifactClient) DeleteOne(a *Artifact) *ArtifactDeleteOne {
	return c.DeleteOneID(a.ID)
}

// DeleteOneID returns a delete builder for the given id.
func (c *ArtifactClient) DeleteOneID(id uuid.UUID) *ArtifactDeleteOne {
	builder := c.Delete().Where(artifact.ID(id))
	builder.mutation.id = &id
	builder.mutation.op = OpDeleteOne
	return &ArtifactDeleteOne{builder}
}

// Query returns a query builder for Artifact.
func (c *ArtifactClient) Query() *ArtifactQuery {
	return &ArtifactQuery{
		config: c.config,
	}
}

// Get returns a Artifact entity by its id.
func (c *ArtifactClient) Get(ctx context.Context, id uuid.UUID) (*Artifact, error) {
	return c.Query().Where(artifact.ID(id)).Only(ctx)
}

// GetX is like Get, but panics if an error occurs.
func (c *ArtifactClient) GetX(ctx context.Context, id uuid.UUID) *Artifact {
	obj, err := c.Get(ctx, id)
	if err != nil {
		panic(err)
	}
	return obj
}

// QueryAffiliatedFile queries the affiliated_file edge of a Artifact.
func (c *ArtifactClient) QueryAffiliatedFile(a *Artifact) *FileQuery {
	query := &FileQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := a.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(artifact.Table, artifact.FieldID, id),
			sqlgraph.To(file.Table, file.FieldID),
			sqlgraph.Edge(sqlgraph.O2O, true, artifact.AffiliatedFileTable, artifact.AffiliatedFileColumn),
		)
		fromV = sqlgraph.Neighbors(a.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// QueryAffiliatedUser queries the affiliated_user edge of a Artifact.
func (c *ArtifactClient) QueryAffiliatedUser(a *Artifact) *UserQuery {
	query := &UserQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := a.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(artifact.Table, artifact.FieldID, id),
			sqlgraph.To(user.Table, user.FieldID),
			sqlgraph.Edge(sqlgraph.M2M, true, artifact.AffiliatedUserTable, artifact.AffiliatedUserPrimaryKey...),
		)
		fromV = sqlgraph.Neighbors(a.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// Hooks returns the client hooks.
func (c *ArtifactClient) Hooks() []Hook {
	return c.hooks.Artifact
}

// FileClient is a client for the File schema.
type FileClient struct {
	config
}

// NewFileClient returns a client for the File from the given config.
func NewFileClient(c config) *FileClient {
	return &FileClient{config: c}
}

// Use adds a list of mutation hooks to the hooks stack.
// A call to `Use(f, g, h)` equals to `file.Hooks(f(g(h())))`.
func (c *FileClient) Use(hooks ...Hook) {
	c.hooks.File = append(c.hooks.File, hooks...)
}

// Create returns a create builder for File.
func (c *FileClient) Create() *FileCreate {
	mutation := newFileMutation(c.config, OpCreate)
	return &FileCreate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// CreateBulk returns a builder for creating a bulk of File entities.
func (c *FileClient) CreateBulk(builders ...*FileCreate) *FileCreateBulk {
	return &FileCreateBulk{config: c.config, builders: builders}
}

// Update returns an update builder for File.
func (c *FileClient) Update() *FileUpdate {
	mutation := newFileMutation(c.config, OpUpdate)
	return &FileUpdate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOne returns an update builder for the given entity.
func (c *FileClient) UpdateOne(f *File) *FileUpdateOne {
	mutation := newFileMutation(c.config, OpUpdateOne, withFile(f))
	return &FileUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOneID returns an update builder for the given id.
func (c *FileClient) UpdateOneID(id uuid.UUID) *FileUpdateOne {
	mutation := newFileMutation(c.config, OpUpdateOne, withFileID(id))
	return &FileUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// Delete returns a delete builder for File.
func (c *FileClient) Delete() *FileDelete {
	mutation := newFileMutation(c.config, OpDelete)
	return &FileDelete{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// DeleteOne returns a delete builder for the given entity.
func (c *FileClient) DeleteOne(f *File) *FileDeleteOne {
	return c.DeleteOneID(f.ID)
}

// DeleteOneID returns a delete builder for the given id.
func (c *FileClient) DeleteOneID(id uuid.UUID) *FileDeleteOne {
	builder := c.Delete().Where(file.ID(id))
	builder.mutation.id = &id
	builder.mutation.op = OpDeleteOne
	return &FileDeleteOne{builder}
}

// Query returns a query builder for File.
func (c *FileClient) Query() *FileQuery {
	return &FileQuery{
		config: c.config,
	}
}

// Get returns a File entity by its id.
func (c *FileClient) Get(ctx context.Context, id uuid.UUID) (*File, error) {
	return c.Query().Where(file.ID(id)).Only(ctx)
}

// GetX is like Get, but panics if an error occurs.
func (c *FileClient) GetX(ctx context.Context, id uuid.UUID) *File {
	obj, err := c.Get(ctx, id)
	if err != nil {
		panic(err)
	}
	return obj
}

// QueryArtifact queries the artifact edge of a File.
func (c *FileClient) QueryArtifact(f *File) *ArtifactQuery {
	query := &ArtifactQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := f.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(file.Table, file.FieldID, id),
			sqlgraph.To(artifact.Table, artifact.FieldID),
			sqlgraph.Edge(sqlgraph.O2O, false, file.ArtifactTable, file.ArtifactColumn),
		)
		fromV = sqlgraph.Neighbors(f.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// QueryAffiliatedUser queries the affiliated_user edge of a File.
func (c *FileClient) QueryAffiliatedUser(f *File) *UserQuery {
	query := &UserQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := f.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(file.Table, file.FieldID, id),
			sqlgraph.To(user.Table, user.FieldID),
			sqlgraph.Edge(sqlgraph.M2M, true, file.AffiliatedUserTable, file.AffiliatedUserPrimaryKey...),
		)
		fromV = sqlgraph.Neighbors(f.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// Hooks returns the client hooks.
func (c *FileClient) Hooks() []Hook {
	return c.hooks.File
}

// UserClient is a client for the User schema.
type UserClient struct {
	config
}

// NewUserClient returns a client for the User from the given config.
func NewUserClient(c config) *UserClient {
	return &UserClient{config: c}
}

// Use adds a list of mutation hooks to the hooks stack.
// A call to `Use(f, g, h)` equals to `user.Hooks(f(g(h())))`.
func (c *UserClient) Use(hooks ...Hook) {
	c.hooks.User = append(c.hooks.User, hooks...)
}

// Create returns a create builder for User.
func (c *UserClient) Create() *UserCreate {
	mutation := newUserMutation(c.config, OpCreate)
	return &UserCreate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// CreateBulk returns a builder for creating a bulk of User entities.
func (c *UserClient) CreateBulk(builders ...*UserCreate) *UserCreateBulk {
	return &UserCreateBulk{config: c.config, builders: builders}
}

// Update returns an update builder for User.
func (c *UserClient) Update() *UserUpdate {
	mutation := newUserMutation(c.config, OpUpdate)
	return &UserUpdate{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOne returns an update builder for the given entity.
func (c *UserClient) UpdateOne(u *User) *UserUpdateOne {
	mutation := newUserMutation(c.config, OpUpdateOne, withUser(u))
	return &UserUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// UpdateOneID returns an update builder for the given id.
func (c *UserClient) UpdateOneID(id uuid.UUID) *UserUpdateOne {
	mutation := newUserMutation(c.config, OpUpdateOne, withUserID(id))
	return &UserUpdateOne{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// Delete returns a delete builder for User.
func (c *UserClient) Delete() *UserDelete {
	mutation := newUserMutation(c.config, OpDelete)
	return &UserDelete{config: c.config, hooks: c.Hooks(), mutation: mutation}
}

// DeleteOne returns a delete builder for the given entity.
func (c *UserClient) DeleteOne(u *User) *UserDeleteOne {
	return c.DeleteOneID(u.ID)
}

// DeleteOneID returns a delete builder for the given id.
func (c *UserClient) DeleteOneID(id uuid.UUID) *UserDeleteOne {
	builder := c.Delete().Where(user.ID(id))
	builder.mutation.id = &id
	builder.mutation.op = OpDeleteOne
	return &UserDeleteOne{builder}
}

// Query returns a query builder for User.
func (c *UserClient) Query() *UserQuery {
	return &UserQuery{
		config: c.config,
	}
}

// Get returns a User entity by its id.
func (c *UserClient) Get(ctx context.Context, id uuid.UUID) (*User, error) {
	return c.Query().Where(user.ID(id)).Only(ctx)
}

// GetX is like Get, but panics if an error occurs.
func (c *UserClient) GetX(ctx context.Context, id uuid.UUID) *User {
	obj, err := c.Get(ctx, id)
	if err != nil {
		panic(err)
	}
	return obj
}

// QueryUserFile queries the user_file edge of a User.
func (c *UserClient) QueryUserFile(u *User) *FileQuery {
	query := &FileQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := u.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(user.Table, user.FieldID, id),
			sqlgraph.To(file.Table, file.FieldID),
			sqlgraph.Edge(sqlgraph.M2M, false, user.UserFileTable, user.UserFilePrimaryKey...),
		)
		fromV = sqlgraph.Neighbors(u.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// QueryUserArtifact queries the user_artifact edge of a User.
func (c *UserClient) QueryUserArtifact(u *User) *ArtifactQuery {
	query := &ArtifactQuery{config: c.config}
	query.path = func(ctx context.Context) (fromV *sql.Selector, _ error) {
		id := u.ID
		step := sqlgraph.NewStep(
			sqlgraph.From(user.Table, user.FieldID, id),
			sqlgraph.To(artifact.Table, artifact.FieldID),
			sqlgraph.Edge(sqlgraph.M2M, false, user.UserArtifactTable, user.UserArtifactPrimaryKey...),
		)
		fromV = sqlgraph.Neighbors(u.driver.Dialect(), step)
		return fromV, nil
	}
	return query
}

// Hooks returns the client hooks.
func (c *UserClient) Hooks() []Hook {
	return c.hooks.User
}
