--- src/lib/printers/notesectionprinter.cpp.orig	2021-07-21 10:44:26 UTC
+++ src/lib/printers/notesectionprinter.cpp
@@ -4,6 +4,11 @@
     SPDX-License-Identifier: LGPL-2.0-or-later
 */
 
+#include "elfdefinitions.h" // must come first before <elf.h>
+#define _ELF_H_
+#ifndef ELF_NOTE_FREEBSD
+#define ELF_NOTE_FREEBSD "FreeBSD"
+#endif
 #include "notesectionprinter.h"
 #include <elf/elfnoteentry.h>
 
@@ -31,7 +36,7 @@
 
 static const int note_types_size = sizeof(note_types) / sizeof(NoteType);
 
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 // FreeBSD elf-common.h has no ELF_NOTE_OS_* and those are strings, anyway
 
 static const NoteType os_types[] {
