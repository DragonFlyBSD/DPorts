--- psutil/_psutil_posix.c.orig	2020-12-18 23:38:52 UTC
+++ psutil/_psutil_posix.c
@@ -45,7 +45,7 @@
 #if defined(PSUTIL_AIX)
     #include <netdb.h>
 #endif
-#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     #include <sys/resource.h>
 #endif
 
@@ -103,7 +103,7 @@ psutil_pid_exists(pid_t pid) {
     // Not what we want. Some platforms have PID 0, some do not.
     // We decide that at runtime.
     if (pid == 0) {
-#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
         return 0;
 #else
         return 1;
@@ -258,7 +258,7 @@ psutil_convert_ipaddr(struct sockaddr *a
         len = lladdr->sll_halen;
         data = (const char *)lladdr->sll_addr;
     }
-#elif defined(PSUTIL_BSD) || defined(PSUTIL_OSX)
+#elif defined(PSUTIL_BSD) || defined(PSUTIL_OSX) || defined(PSUTIL_DRAGONFLY)
     else if (addr->sa_family == AF_LINK) {
         // Note: prior to Python 3.4 socket module does not expose
         // AF_LINK so we'll do.
@@ -721,7 +721,7 @@ static PyMethodDef mod_methods[] = {
     if (PyModule_AddIntConstant(mod, "AF_LINK", AF_LINK)) INITERR;
 #endif
 
-#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD)
+#if defined(PSUTIL_LINUX) || defined(PSUTIL_FREEBSD) || defined(PSUTIL_DRAGONFLY)
     PyObject *v;
 
 #ifdef RLIMIT_AS
