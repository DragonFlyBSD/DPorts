--- src/lj_gdbjit.c.orig	2013-06-03 19:00:00.000000000 +0000
+++ src/lj_gdbjit.c
@@ -350,7 +350,7 @@ static const ELFheader elfhdr_template =
   .eversion = 1,
 #if LJ_TARGET_LINUX
   .eosabi = 0,  /* Nope, it's not 3. */
-#elif defined(__FreeBSD__)
+#elif defined(__FreeBSD__) && !defined(__DragonFly__)
   .eosabi = 9,
 #elif defined(__NetBSD__)
   .eosabi = 2,
