--- vendor/luajit/src/lj_gdbjit.c.orig	2014-12-08 00:07:09 UTC
+++ vendor/luajit/src/lj_gdbjit.c
@@ -356,6 +356,8 @@ static const ELFheader elfhdr_template =
   .eosabi = 2,
 #elif defined(__OpenBSD__)
   .eosabi = 12,
+#elif defined(__DragonFly__)
+  .eosabi = 0,
 #elif (defined(__sun__) && defined(__svr4__))
   .eosabi = 6,
 #else
