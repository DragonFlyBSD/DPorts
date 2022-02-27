--- src/libvga.h.intermediate	2022-02-09 13:55:17.000000000 +0000
+++ src/libvga.h
@@ -195,7 +195,7 @@ extern int __svgalib_getchipset(void);
 extern int __svgalib_name2number(char *modename);
 extern void __svgalib_delay(void);
 extern int __svgalib_addmode(int xdim, int ydim, int cols, int xbytes, int bytespp);
-extern int __svgalib_physmem(void);
+extern unsigned long __svgalib_physmem(void);
 extern void __svgalib_waitvtactive(void);
 extern void __svgalib_open_devconsole(void);
 extern void __svgalib_flipaway(void);
