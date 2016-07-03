--- src/unilib/arc4random.c.orig	2004-09-30 13:29:06.000000000 +0300
+++ src/unilib/arc4random.c
@@ -132,7 +132,11 @@ void arc4random_stir(void) {
 	arc4_stir(&rs);
 }
 
+#ifdef __DragonFly__
+void arc4random_addrandom(uint8_t *dat, size_t datlen) {
+#else
 void arc4random_addrandom(uint8_t *dat, int datlen) {
+#endif
 	if (!rs_initialized) {
 		(void) arc4random_stir();
 	}
