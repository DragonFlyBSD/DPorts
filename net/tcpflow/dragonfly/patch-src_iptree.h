--- src/iptree.h.orig
+++ src/iptree.h
@@ -240,6 +240,9 @@
         return (addr[i / 8]) & (1<<((7-i)&7));
     }
     /* set the ith bit to 1 */
+#ifdef setbit
+#undef setbit
+#endif
     static void setbit(uint8_t *addr,size_t addrlen, size_t i){
         if ( i/8 < addrlen) {
             addr[i / 8] |= (1<<((7-i)&7));
