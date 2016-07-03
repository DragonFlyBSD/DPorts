--- src/unilib/arc4random.h.orig	2004-09-30 13:29:06.000000000 +0300
+++ src/unilib/arc4random.h
@@ -2,7 +2,11 @@
 # define _ARC4RANDOM
 
 void arc4random_stir(void);
+#ifdef __DragonFly__
+void arc4random_addrandom(unsigned char *, size_t);
+#else
 void arc4random_addrandom(unsigned char *, int);
+#endif
 unsigned int arc4random(void);
 
 #endif
