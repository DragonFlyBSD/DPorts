--- simgear/misc/strutils.cxx.orig	2026-08-02 12:17:27 UTC
+++ simgear/misc/strutils.cxx
@@ -1169,7 +1169,7 @@ std::string error_string(int errnum)
   retcode = strerror_s(buf, sizeof(buf), errnum);
 #elif defined(_GNU_SOURCE)
   return std::string(strerror_r(errnum, buf, sizeof(buf)));
-#elif (_POSIX_C_SOURCE >= 200112L) || defined(SG_MAC) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif (_POSIX_C_SOURCE >= 200112L) || defined(SG_MAC) || defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
   int retcode;
   // POSIX.1-2001 and POSIX.1-2008
   retcode = strerror_r(errnum, buf, sizeof(buf));
