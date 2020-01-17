/*-------------------------------------------------------------------------
 *
 * pg_class_d.h
 *    Macro definitions for pg_class
 *
 * Portions Copyright (c) 1996-2018, PostgreSQL Global Development Group
 * Portions Copyright (c) 1994, Regents of the University of California
 *
 * NOTES
 *  ******************************
 *  *** DO NOT EDIT THIS FILE! ***
 *  ******************************
 *
 *  It has been GENERATED by src/backend/catalog/genbki.pl
 *
 *-------------------------------------------------------------------------
 */
#ifndef PG_CLASS_D_H
#define PG_CLASS_D_H

#define RelationRelationId 1259
#define RelationRelation_Rowtype_Id 83

#define Anum_pg_class_relname 1
#define Anum_pg_class_relnamespace 2
#define Anum_pg_class_reltype 3
#define Anum_pg_class_reloftype 4
#define Anum_pg_class_relowner 5
#define Anum_pg_class_relam 6
#define Anum_pg_class_relfilenode 7
#define Anum_pg_class_reltablespace 8
#define Anum_pg_class_relpages 9
#define Anum_pg_class_reltuples 10
#define Anum_pg_class_relallvisible 11
#define Anum_pg_class_reltoastrelid 12
#define Anum_pg_class_relhasindex 13
#define Anum_pg_class_relisshared 14
#define Anum_pg_class_relpersistence 15
#define Anum_pg_class_relkind 16
#define Anum_pg_class_relnatts 17
#define Anum_pg_class_relchecks 18
#define Anum_pg_class_relhasoids 19
#define Anum_pg_class_relhasrules 20
#define Anum_pg_class_relhastriggers 21
#define Anum_pg_class_relhassubclass 22
#define Anum_pg_class_relrowsecurity 23
#define Anum_pg_class_relforcerowsecurity 24
#define Anum_pg_class_relispopulated 25
#define Anum_pg_class_relreplident 26
#define Anum_pg_class_relispartition 27
#define Anum_pg_class_pad1 28
#define Anum_pg_class_pad2 29
#define Anum_pg_class_relshardid 30
#define Anum_pg_class_relrewrite 31
#define Anum_pg_class_relfrozenxid 32
#define Anum_pg_class_relminmxid 33
#define Anum_pg_class_relacl 34
#define Anum_pg_class_reloptions 35
#define Anum_pg_class_relpartbound 36

#define Natts_pg_class 36


#define		  RELKIND_RELATION		  'r'	/* ordinary table */
#define		  RELKIND_INDEX			  'i'	/* secondary index */
#define		  RELKIND_SEQUENCE		  'S'	/* sequence object */
#define		  RELKIND_TOASTVALUE	  't'	/* for out-of-line values */
#define		  RELKIND_VIEW			  'v'	/* view */
#define		  RELKIND_MATVIEW		  'm'	/* materialized view */
#define		  RELKIND_COMPOSITE_TYPE  'c'	/* composite type */
#define		  RELKIND_FOREIGN_TABLE   'f'	/* foreign table */
#define		  RELKIND_PARTITIONED_TABLE 'p' /* partitioned table */
#define		  RELKIND_PARTITIONED_INDEX 'I' /* partitioned index */

#define		  RELPERSISTENCE_PERMANENT	'p' /* regular table */
#define		  RELPERSISTENCE_UNLOGGED	'u' /* unlogged permanent table */
#define		  RELPERSISTENCE_TEMP		't' /* temporary table */

/* default selection for replica identity (primary key or nothing) */
#define		  REPLICA_IDENTITY_DEFAULT	'd'
/* no replica identity is logged for this relation */
#define		  REPLICA_IDENTITY_NOTHING	'n'
/* all columns are logged as replica identity */
#define		  REPLICA_IDENTITY_FULL		'f'
/*
 * an explicitly chosen candidate key's columns are used as replica identity.
 * Note this will still be set if the index has been dropped; in that case it
 * has the same meaning as 'd'.
 */
#define		  REPLICA_IDENTITY_INDEX	'i'


#endif							/* PG_CLASS_D_H */