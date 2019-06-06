--- src/arch/shared/archdep_program_path.c.orig	2018-12-17 18:45:04 UTC
+++ src/arch/shared/archdep_program_path.c
@@ -54,7 +54,7 @@
 /* for readlink(2) */
 #if defined(ARCHDEP_OS_UNIX) || defined(ARCHDEP_OS_BEOS)
 # include <unistd.h>
-# ifdef ARCHDEP_OS_BSD_FREE
+# if defined(ARCHDEP_OS_BSD_FREE) || defined(ARCHDEP_OS_BSD_DRAGON)
 #  include <sys/sysctl.h>
 # endif
 # ifdef ARCHDEP_OS_OSX
@@ -254,7 +254,7 @@ const char *archdep_program_path(void)
 
     /* BSD's */
 # elif defined(ARCHDEP_OS_BSD)
-#  if defined(ARCHDEP_OS_BSD_FREE)
+#  if defined(ARCHDEP_OS_BSD_FREE) || defined(ARCHDEP_OS_BSD_DRAGON)
 
     int mib[4];
     size_t bufsize = PATH_BUFSIZE;
@@ -301,8 +301,6 @@ const char *archdep_program_path(void)
     if (!argv_fallback()) {
         archdep_vice_exit(1);
     }
-#  elif defined(ARCHDEP_OS_BSD_DRAGON)
-#   error DragonFly BSD support missing
 
 #  endif    /* end BSD's */
 
