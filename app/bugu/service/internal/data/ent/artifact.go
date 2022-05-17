// Code generated by entc, DO NOT EDIT.

package ent

import (
	"bugu/app/bugu/service/internal/data/ent/artifact"
	"bugu/app/bugu/service/internal/data/ent/file"
	"fmt"
	"strings"
	"time"

	"entgo.io/ent/dialect/sql"
	"github.com/google/uuid"
)

// Artifact is the model entity for the Artifact schema.
type Artifact struct {
	config `json:"-"`
	// ID of the ent.
	ID uuid.UUID `json:"id,omitempty"`
	// FileID holds the value of the "file_id" field.
	FileID uuid.UUID `json:"file_id,omitempty"`
	// ArtifactHash holds the value of the "artifact_hash" field.
	ArtifactHash uuid.UUID `json:"artifact_hash,omitempty"`
	// ArtifactSize holds the value of the "artifact_size" field.
	ArtifactSize int64 `json:"artifact_size,omitempty"`
	// ArtifactAddr holds the value of the "artifact_addr" field.
	ArtifactAddr string `json:"artifact_addr,omitempty"`
	// Method holds the value of the "method" field.
	Method string `json:"method,omitempty"`
	// CreatedAt holds the value of the "created_at" field.
	CreatedAt time.Time `json:"created_at,omitempty"`
	// UpdatedAt holds the value of the "updated_at" field.
	UpdatedAt time.Time `json:"updated_at,omitempty"`
	// Edges holds the relations/edges for other nodes in the graph.
	// The values are being populated by the ArtifactQuery when eager-loading is set.
	Edges ArtifactEdges `json:"edges"`
}

// ArtifactEdges holds the relations/edges for other nodes in the graph.
type ArtifactEdges struct {
	// AffiliatedFile holds the value of the affiliated_file edge.
	AffiliatedFile *File `json:"affiliated_file,omitempty"`
	// AffiliatedUser holds the value of the affiliated_user edge.
	AffiliatedUser []*User `json:"affiliated_user,omitempty"`
	// loadedTypes holds the information for reporting if a
	// type was loaded (or requested) in eager-loading or not.
	loadedTypes [2]bool
}

// AffiliatedFileOrErr returns the AffiliatedFile value or an error if the edge
// was not loaded in eager-loading, or loaded but was not found.
func (e ArtifactEdges) AffiliatedFileOrErr() (*File, error) {
	if e.loadedTypes[0] {
		if e.AffiliatedFile == nil {
			// The edge affiliated_file was loaded in eager-loading,
			// but was not found.
			return nil, &NotFoundError{label: file.Label}
		}
		return e.AffiliatedFile, nil
	}
	return nil, &NotLoadedError{edge: "affiliated_file"}
}

// AffiliatedUserOrErr returns the AffiliatedUser value or an error if the edge
// was not loaded in eager-loading.
func (e ArtifactEdges) AffiliatedUserOrErr() ([]*User, error) {
	if e.loadedTypes[1] {
		return e.AffiliatedUser, nil
	}
	return nil, &NotLoadedError{edge: "affiliated_user"}
}

// scanValues returns the types for scanning values from sql.Rows.
func (*Artifact) scanValues(columns []string) ([]interface{}, error) {
	values := make([]interface{}, len(columns))
	for i := range columns {
		switch columns[i] {
		case artifact.FieldArtifactSize:
			values[i] = new(sql.NullInt64)
		case artifact.FieldArtifactAddr, artifact.FieldMethod:
			values[i] = new(sql.NullString)
		case artifact.FieldCreatedAt, artifact.FieldUpdatedAt:
			values[i] = new(sql.NullTime)
		case artifact.FieldID, artifact.FieldFileID, artifact.FieldArtifactHash:
			values[i] = new(uuid.UUID)
		default:
			return nil, fmt.Errorf("unexpected column %q for type Artifact", columns[i])
		}
	}
	return values, nil
}

// assignValues assigns the values that were returned from sql.Rows (after scanning)
// to the Artifact fields.
func (a *Artifact) assignValues(columns []string, values []interface{}) error {
	if m, n := len(values), len(columns); m < n {
		return fmt.Errorf("mismatch number of scan values: %d != %d", m, n)
	}
	for i := range columns {
		switch columns[i] {
		case artifact.FieldID:
			if value, ok := values[i].(*uuid.UUID); !ok {
				return fmt.Errorf("unexpected type %T for field id", values[i])
			} else if value != nil {
				a.ID = *value
			}
		case artifact.FieldFileID:
			if value, ok := values[i].(*uuid.UUID); !ok {
				return fmt.Errorf("unexpected type %T for field file_id", values[i])
			} else if value != nil {
				a.FileID = *value
			}
		case artifact.FieldArtifactHash:
			if value, ok := values[i].(*uuid.UUID); !ok {
				return fmt.Errorf("unexpected type %T for field artifact_hash", values[i])
			} else if value != nil {
				a.ArtifactHash = *value
			}
		case artifact.FieldArtifactSize:
			if value, ok := values[i].(*sql.NullInt64); !ok {
				return fmt.Errorf("unexpected type %T for field artifact_size", values[i])
			} else if value.Valid {
				a.ArtifactSize = value.Int64
			}
		case artifact.FieldArtifactAddr:
			if value, ok := values[i].(*sql.NullString); !ok {
				return fmt.Errorf("unexpected type %T for field artifact_addr", values[i])
			} else if value.Valid {
				a.ArtifactAddr = value.String
			}
		case artifact.FieldMethod:
			if value, ok := values[i].(*sql.NullString); !ok {
				return fmt.Errorf("unexpected type %T for field method", values[i])
			} else if value.Valid {
				a.Method = value.String
			}
		case artifact.FieldCreatedAt:
			if value, ok := values[i].(*sql.NullTime); !ok {
				return fmt.Errorf("unexpected type %T for field created_at", values[i])
			} else if value.Valid {
				a.CreatedAt = value.Time
			}
		case artifact.FieldUpdatedAt:
			if value, ok := values[i].(*sql.NullTime); !ok {
				return fmt.Errorf("unexpected type %T for field updated_at", values[i])
			} else if value.Valid {
				a.UpdatedAt = value.Time
			}
		}
	}
	return nil
}

// QueryAffiliatedFile queries the "affiliated_file" edge of the Artifact entity.
func (a *Artifact) QueryAffiliatedFile() *FileQuery {
	return (&ArtifactClient{config: a.config}).QueryAffiliatedFile(a)
}

// QueryAffiliatedUser queries the "affiliated_user" edge of the Artifact entity.
func (a *Artifact) QueryAffiliatedUser() *UserQuery {
	return (&ArtifactClient{config: a.config}).QueryAffiliatedUser(a)
}

// Update returns a builder for updating this Artifact.
// Note that you need to call Artifact.Unwrap() before calling this method if this Artifact
// was returned from a transaction, and the transaction was committed or rolled back.
func (a *Artifact) Update() *ArtifactUpdateOne {
	return (&ArtifactClient{config: a.config}).UpdateOne(a)
}

// Unwrap unwraps the Artifact entity that was returned from a transaction after it was closed,
// so that all future queries will be executed through the driver which created the transaction.
func (a *Artifact) Unwrap() *Artifact {
	tx, ok := a.config.driver.(*txDriver)
	if !ok {
		panic("ent: Artifact is not a transactional entity")
	}
	a.config.driver = tx.drv
	return a
}

// String implements the fmt.Stringer.
func (a *Artifact) String() string {
	var builder strings.Builder
	builder.WriteString("Artifact(")
	builder.WriteString(fmt.Sprintf("id=%v", a.ID))
	builder.WriteString(", file_id=")
	builder.WriteString(fmt.Sprintf("%v", a.FileID))
	builder.WriteString(", artifact_hash=")
	builder.WriteString(fmt.Sprintf("%v", a.ArtifactHash))
	builder.WriteString(", artifact_size=")
	builder.WriteString(fmt.Sprintf("%v", a.ArtifactSize))
	builder.WriteString(", artifact_addr=")
	builder.WriteString(a.ArtifactAddr)
	builder.WriteString(", method=")
	builder.WriteString(a.Method)
	builder.WriteString(", created_at=")
	builder.WriteString(a.CreatedAt.Format(time.ANSIC))
	builder.WriteString(", updated_at=")
	builder.WriteString(a.UpdatedAt.Format(time.ANSIC))
	builder.WriteByte(')')
	return builder.String()
}

// Artifacts is a parsable slice of Artifact.
type Artifacts []*Artifact

func (a Artifacts) config(cfg config) {
	for _i := range a {
		a[_i].config = cfg
	}
}
