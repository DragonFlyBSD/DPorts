--- src/fts-xapian-plugin.c.orig	2021-11-11 18:16:47 UTC
+++ src/fts-xapian-plugin.c
@@ -31,7 +31,7 @@ static void fts_xapian_mail_user_created
         fuser->set.partial 	= XAPIAN_DEFAULT_PARTIAL;
         fuser->set.full 	= XAPIAN_DEFAULT_FULL;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	size_t len = sizeof(fuser->set.pagesize);
 	sysctlbyname("hw.pagesize", &(fuser->set.pagesize), &len, NULL, 0);
 #else
