--- src/util.cpp.orig	2026-08-16 19:02:36 UTC
+++ src/util.cpp
@@ -118,7 +118,7 @@ int confirm4(const std::string& question) {
 // representation is always lowercase anyway.
 // For the implementation details, refer to
 // https://svnweb.freebsd.org/base/head/sys/kern/kern_uuid.c
-#if defined(FREEBSD) || defined(OPENBSD)
+#if defined(FREEBSD) || defined(OPENBSD) || defined(DRAGONFLY)
 const std::string uuid() {
   uuid_t id;
   uint32_t status;
