--- base/system/sys_info_posix.cc.orig	2026-09-19 22:42:50 UTC
+++ base/system/sys_info_posix.cc
@@ -59,7 +59,7 @@
   if (result != 0) {
     NOTREACHED();
   }
-#if BUILDFLAG(IS_FREEBSD)
+#if BUILDFLAG(IS_FREEBSD) || BUILDFLAG(IS_DRAGONFLY)
   return base::ByteSize(limit.rlim_cur == RLIM_INFINITY ? 0 : base::checked_cast<uint64_t>(limit.rlim_cur));
 #else
   return base::ByteSize(limit.rlim_cur == RLIM_INFINITY ? 0 : limit.rlim_cur);
