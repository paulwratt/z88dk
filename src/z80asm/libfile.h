//-----------------------------------------------------------------------------
// z80asm restart
// Copyright (C) Paulo Custodio, 2011-2020
// License: The Artistic License 2.0, http://www.perlfoundation.org/artistic_license_2_0
//-----------------------------------------------------------------------------

#pragma once

#include "types.h"
#include "strutil.h"
#include "utstring.h"

extern char Z80libhdr[];

/* make library from list of files; convert each source to object file name */
extern void make_library(const char* lib_filename, size_t num_files, const char* files[]);

// check if the given filename exists and is a library file of the correct version
extern bool check_library_file(const char* src_filename);
