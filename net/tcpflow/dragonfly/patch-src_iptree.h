After base libpcap update the <sys/param.h> now is getting picked up
undefine setbit() macro

iptree.h:244:32: error: expected ')' before '*' token
     static void setbit(uint8_t *addr,size_t i){

--- src/iptree.hi.orig	2015-08-12 01:28:53.000000000 +0000
+++ src/iptree.h
@@ -241,6 +241,10 @@ public:
         return (addr[i / 8]) & (1<<((7-i)&7));
     }
     /* set the ith bit to 1 */
+#ifdef __DragonFly__
+/* setbit() is a macro in <sys/param.h> */
+#undef setbit
+#endif
     static void setbit(uint8_t *addr,size_t i){
         addr[i / 8] |= (1<<((7-i)&7));
     }
