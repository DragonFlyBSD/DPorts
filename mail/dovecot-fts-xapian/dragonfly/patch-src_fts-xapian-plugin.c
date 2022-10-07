--- src/fts-xapian-plugin.c.orig	2022-03-05 15:49:44 UTC
+++ src/fts-xapian-plugin.c
@@ -35,7 +35,7 @@ static void fts_xapian_mail_user_created
         fuser->set.partial 	= XAPIAN_DEFAULT_PARTIAL;
         fuser->set.full 	= XAPIAN_DEFAULT_FULL;
 
-#if defined(__FreeBSD__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__APPLE__)
 	size_t len = sizeof(fuser->set.pagesize);
 	sysctlbyname("hw.pagesize", &(fuser->set.pagesize), &len, NULL, 0);
 #else
