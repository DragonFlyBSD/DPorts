--- src/third_party/wiredtiger/src/os_posix/os_dlopen.c.orig	2022-11-01 18:21:44 UTC
+++ src/third_party/wiredtiger/src/os_posix/os_dlopen.c
@@ -68,7 +68,7 @@ __wt_dlclose(WT_SESSION_IMPL *session, W
  * For now, just skip the dlclose: this may leak some resources until the process exits, but that is
  * preferable to hard-to-debug crashes during exit.
  */
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly)
     if (dlclose(dlh->handle) != 0) {
         ret = __wt_errno();
         __wt_err(session, ret, "dlclose: %s", dlerror());
