// Code generated by entc, DO NOT EDIT.

package file

import (
	"fmt"
	"time"
)

const (
	// Label holds the string label denoting the file type in the database.
	Label = "file"
	// FieldID holds the string denoting the id field in the database.
	FieldID = "id"
	// FieldFileSha1 holds the string denoting the file_sha_1 field in the database.
	FieldFileSha1 = "file_sha_1"
	// FieldFileSize holds the string denoting the file_size field in the database.
	FieldFileSize = "file_size"
	// FieldFileAddr holds the string denoting the file_addr field in the database.
	FieldFileAddr = "file_addr"
	// FieldType holds the string denoting the type field in the database.
	FieldType = "type"
	// FieldCreatedAt holds the string denoting the created_at field in the database.
	FieldCreatedAt = "created_at"
	// FieldUpdatedAt holds the string denoting the updated_at field in the database.
	FieldUpdatedAt = "updated_at"
	// EdgeArtifact holds the string denoting the artifact edge name in mutations.
	EdgeArtifact = "artifact"
	// EdgeAffiliatedUser holds the string denoting the affiliated_user edge name in mutations.
	EdgeAffiliatedUser = "affiliated_user"
	// Table holds the table name of the file in the database.
	Table = "files"
	// ArtifactTable is the table that holds the artifact relation/edge.
	ArtifactTable = "artifacts"
	// ArtifactInverseTable is the table name for the Artifact entity.
	// It exists in this package in order to avoid circular dependency with the "artifact" package.
	ArtifactInverseTable = "artifacts"
	// ArtifactColumn is the table column denoting the artifact relation/edge.
	ArtifactColumn = "file_id"
	// AffiliatedUserTable is the table that holds the affiliated_user relation/edge. The primary key declared below.
	AffiliatedUserTable = "user_user_file"
	// AffiliatedUserInverseTable is the table name for the User entity.
	// It exists in this package in order to avoid circular dependency with the "user" package.
	AffiliatedUserInverseTable = "users"
)

// Columns holds all SQL columns for file fields.
var Columns = []string{
	FieldID,
	FieldFileSha1,
	FieldFileSize,
	FieldFileAddr,
	FieldType,
	FieldCreatedAt,
	FieldUpdatedAt,
}

var (
	// AffiliatedUserPrimaryKey and AffiliatedUserColumn2 are the table columns denoting the
	// primary key for the affiliated_user relation (M2M).
	AffiliatedUserPrimaryKey = []string{"user_id", "file_id"}
)

// ValidColumn reports if the column name is valid (part of the table columns).
func ValidColumn(column string) bool {
	for i := range Columns {
		if column == Columns[i] {
			return true
		}
	}
	return false
}

var (
	// DefaultCreatedAt holds the default value on creation for the "created_at" field.
	DefaultCreatedAt func() time.Time
	// DefaultUpdatedAt holds the default value on creation for the "updated_at" field.
	DefaultUpdatedAt func() time.Time
)

// Type defines the type for the "type" enum field.
type Type string

// Type values.
const (
	TypeAdposhel    Type = "Adposhel"
	TypeAgent       Type = "Agent"
	TypeAllaple     Type = "Allaple"
	TypeAmonetize   Type = "Amonetize"
	TypeAndrom      Type = "Androm"
	TypeAutorun     Type = "Autorun"
	TypeBrowseFox   Type = "BrowseFox"
	TypeDinwod      Type = "Dinwod"
	TypeElex        Type = "Elex"
	TypeExpiro      Type = "Expiro"
	TypeFasong      Type = "Fasong"
	TypeHackKMS     Type = "HackKMS"
	TypeHlux        Type = "Hlux"
	TypeInjector    Type = "Injector"
	TypeInstallCore Type = "InstallCore"
	TypeMultiPlug   Type = "MultiPlug"
	TypeNeoreklami  Type = "Neoreklami"
	TypeNeshta      Type = "Neshta"
	TypeOther       Type = "Other"
	TypeRegrun      Type = "Regrun"
	TypeSality      Type = "Sality"
	TypeSnarasite   Type = "Snarasite"
	TypeStantinko   Type = "Stantinko"
	TypeVBA         Type = "VBA"
	TypeVBKrypt     Type = "VBKrypt"
	TypeVilsel      Type = "Vilsel"
)

func (_type Type) String() string {
	return string(_type)
}

// TypeValidator is a validator for the "type" field enum values. It is called by the builders before save.
func TypeValidator(_type Type) error {
	switch _type {
	case TypeAdposhel, TypeAgent, TypeAllaple, TypeAmonetize, TypeAndrom, TypeAutorun, TypeBrowseFox, TypeDinwod, TypeElex, TypeExpiro, TypeFasong, TypeHackKMS, TypeHlux, TypeInjector, TypeInstallCore, TypeMultiPlug, TypeNeoreklami, TypeNeshta, TypeOther, TypeRegrun, TypeSality, TypeSnarasite, TypeStantinko, TypeVBA, TypeVBKrypt, TypeVilsel:
		return nil
	default:
		return fmt.Errorf("file: invalid enum value for type field: %q", _type)
	}
}
