--- src/util.cpp.orig	2015-05-10 21:35:22 UTC
+++ src/util.cpp
@@ -136,7 +136,7 @@ int autoComplete (
 // representation is always lowercase anyway.
 // For the implementation details, refer to
 // http://svnweb.freebsd.org/base/head/sys/kern/kern_uuid.c
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(DRAGONFLY)
 const std::string uuid ()
 {
   uuid_t id;
