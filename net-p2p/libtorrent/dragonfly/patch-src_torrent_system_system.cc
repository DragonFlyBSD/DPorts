--- src/torrent/system/system.cc.orig	2026-10-26 02:54:45 UTC
+++ src/torrent/system/system.cc
@@ -76,7 +76,9 @@ errno_enum(int status) {
   case ENETUNREACH:     return "ENETUNREACH";
   case ENFILE:          return "ENFILE";
   case ENOBUFS:         return "ENOBUFS";
+#if defined(ENODATA)
   case ENODATA:         return "ENODATA";
+#endif
   case ENODEV:          return "ENODEV";
   case ENOENT:          return "ENOENT";
   case ENOEXEC:         return "ENOEXEC";
@@ -86,8 +88,12 @@ errno_enum(int status) {
   case ENOMSG:          return "ENOMSG";
   case ENOPROTOOPT:     return "ENOPROTOOPT";
   case ENOSPC:          return "ENOSPC";
+#if defined(ENOSR)
   case ENOSR:           return "ENOSR";
+#endif
+#if defined(ENOSTR)
   case ENOSTR:          return "ENOSTR";
+#endif
   case ENOSYS:          return "ENOSYS";
   case ENOTCONN:        return "ENOTCONN";
   case ENOTDIR:         return "ENOTDIR";
@@ -107,7 +113,9 @@ errno_enum(int status) {
   case ESPIPE:          return "ESPIPE";
   case ESRCH:           return "ESRCH";
   case ESTALE:          return "ESTALE";
+#if defined(ETIME)
   case ETIME:           return "ETIME";
+#endif
   case ETIMEDOUT:       return "ETIMEDOUT";
   case ETXTBSY:         return "ETXTBSY";
   case EXDEV:           return "EXDEV";
