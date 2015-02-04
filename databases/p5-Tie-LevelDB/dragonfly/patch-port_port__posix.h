--- port/port_posix.h.orig	2011-11-14 02:54:56 UTC
+++ port/port_posix.h
@@ -7,7 +7,7 @@
 #ifndef STORAGE_LEVELDB_PORT_PORT_POSIX_H_
 #define STORAGE_LEVELDB_PORT_PORT_POSIX_H_
 
-#if defined(OS_MACOSX) || defined(OS_FREEBSD)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD) || defined(OS_DRAGONFLYBSD)
   #include <machine/endian.h>
 #elif defined(OS_SOLARIS)
   #include <sys/isa_defs.h>
@@ -33,13 +33,13 @@
 #define IS_LITTLE_ENDIAN (__BYTE_ORDER == __LITTLE_ENDIAN)
 #endif
 
-#if defined(OS_MACOSX) || defined(OS_SOLARIS) || defined(OS_FREEBSD)
+#if defined(OS_MACOSX) || defined(OS_SOLARIS) || defined(OS_FREEBSD) || defined(OS_DRAGONFLYBSD)
 #define fread_unlocked fread
 #define fwrite_unlocked fwrite
 #define fflush_unlocked fflush
 #endif
 
-#if defined(OS_MACOSX) || defined(OS_FREEBSD)
+#if defined(OS_MACOSX) || defined(OS_FREEBSD) || defined(OS_DRAGONFLYBSD)
 #define fdatasync fsync
 #endif
 
