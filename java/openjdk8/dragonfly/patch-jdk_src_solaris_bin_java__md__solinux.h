--- jdk/src/solaris/bin/java_md_solinux.h.orig	2021-01-20 00:41:17 UTC
+++ jdk/src/solaris/bin/java_md_solinux.h
@@ -48,7 +48,7 @@ extern char **environ;
 #ifdef __solaris__
 static const char *system_dir   = "/usr/jdk";
 static const char *user_dir     = "/jdk";
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
 static const char *system_dir  = PACKAGE_PATH "/openjdk8";
 static const char *user_dir    = "/java";
 #else /* !__solaris__, i.e. Linux, AIX,.. */
