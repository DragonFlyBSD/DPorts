--- src/util.cpp.orig	2020-12-05 22:11:36 UTC
+++ src/util.cpp
@@ -28,7 +28,7 @@
 #include <shared.h>
 // If <iostream> is included, put it after <stdio.h>, because it includes
 // <stdio.h>, and therefore would ignore the _WITH_GETLINE.
-#ifdef FREEBSD
+#if defined FREEBSD || defined DRAGONFLY
 #define _WITH_GETLINE
 #endif
 #include <stdio.h>
@@ -131,7 +131,7 @@ int confirm4 (const std::string& questio
 // representation is always lowercase anyway.
 // For the implementation details, refer to
 // http://svnweb.freebsd.org/base/head/sys/kern/kern_uuid.c
-#if defined(FREEBSD) || defined(OPENBSD)
+#if defined(FREEBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 const std::string uuid ()
 {
   uuid_t id;
