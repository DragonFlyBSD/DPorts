--- src/dinoex_main.c.orig	2014-10-08 22:23:30.000000000 +0300
+++ src/dinoex_main.c
@@ -204,6 +204,8 @@ void check_osname(const char *sysname)
    outerror_sysname("OpenBSD", sysname); /* NOTRANSLATE */
 #elif defined(_OS_NetBSD)
    outerror_sysname("NetBSD", sysname); /* NOTRANSLATE */
+#elif defined(_OS_DragonFly)
+   outerror_sysname("DragonFly", sysname); /* NOTRANSLATE */
 #elif defined(_OS_BSDI)
    outerror_sysname("BSD/OS", sysname); /* NOTRANSLATE */
 #elif defined(_OS_BSD_OS)
