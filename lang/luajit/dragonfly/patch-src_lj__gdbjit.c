--- src/lj_gdbjit.c.orig	2014-10-12 14:14:07 UTC
+++ src/lj_gdbjit.c
@@ -356,6 +356,8 @@
   .eosabi = 2,
 #elif defined(__OpenBSD__)
   .eosabi = 12,
+#elif defined(__DragonFly__)
+  .eosabi = 0,
 #elif (defined(__sun__) && defined(__svr4__))
   .eosabi = 6,
 #else
