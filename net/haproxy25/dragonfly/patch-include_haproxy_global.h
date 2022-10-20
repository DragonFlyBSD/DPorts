--- include/haproxy/global.h.orig	2021-06-17 07:06:08 UTC
+++ include/haproxy/global.h
@@ -55,6 +55,10 @@ extern int atexit_flag;
 extern unsigned char boot_seed[20];  // per-boot random seed (160 bits initially)
 extern THREAD_LOCAL struct buffer trash;
 
+#ifndef __read_mostly
+#define __read_mostly       __section(".data.read_mostly")
+#endif
+
 struct proxy;
 struct server;
 int main(int argc, char **argv);
