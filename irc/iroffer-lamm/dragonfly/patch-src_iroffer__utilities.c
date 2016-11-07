--- src/iroffer_utilities.c.orig	2005-12-13 04:57:56.000000000 +0200
+++ src/iroffer_utilities.c
@@ -197,9 +197,10 @@ void getos (void) {
 #elif defined(_OS_FreeBSD)   || \
     defined(_OS_OpenBSD)     || \
     defined(_OS_NetBSD)      || \
+    defined(_OS_DragonFly)   || \
     defined(_OS_BSDI)        || \
     defined(_OS_BSD_OS)
-   if (strcmp(u1.sysname,"FreeBSD") && strcmp(u1.sysname,"OpenBSD") && strcmp(u1.sysname,"BSD/OS") && strcmp(u1.sysname,"NetBSD"))
+   if (strcmp(u1.sysname,"FreeBSD") && strcmp(u1.sysname,"OpenBSD") && strcmp(u1.sysname,"BSD/OS") && strcmp(u1.sysname,"NetBSD") && strcmp(u1.sysname,"DragonFly"))
       outerror(OUTERROR_TYPE_WARN_LOUD,"Configured for *BSD but not running *BSD?!?");
    printf(", Good\n");
 
