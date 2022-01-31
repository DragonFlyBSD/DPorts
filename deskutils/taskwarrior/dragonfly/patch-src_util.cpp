--- src/util.cpp.orig	2021-10-19 04:23:40 UTC
+++ src/util.cpp
@@ -131,7 +131,7 @@ int confirm4 (const std::string& questio
 // representation is always lowercase anyway.
 // For the implementation details, refer to
 // https://svnweb.freebsd.org/base/head/sys/kern/kern_uuid.c
-#if defined(FREEBSD) || defined(OPENBSD)
+#if defined(FREEBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 const std::string uuid ()
 {
   uuid_t id;
