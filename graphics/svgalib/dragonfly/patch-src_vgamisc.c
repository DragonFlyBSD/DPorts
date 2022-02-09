--- src/vgamisc.c.intermediate	2022-02-09 13:55:17.000000000 +0000
+++ src/vgamisc.c
@@ -76,14 +76,14 @@ unsigned char *
 #include <sys/types.h>
 #include <sys/sysctl.h>
 
-int __svgalib_physmem(void)
+unsigned long __svgalib_physmem(void)
 {
 #ifdef __alpha__
     printf("__svgalib_physmem: are you sure you wanna do this??\n");
     return -1;
 #else
-    int mem;
-    int smem;
+    unsigned long mem;
+    size_t smem;
     smem = sizeof(mem);
     sysctlbyname("hw.physmem", &mem, &smem, NULL, 0);
     return mem;
