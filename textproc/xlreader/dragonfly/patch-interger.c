Use local definitions, to avoid false matches.

--- interger.c.orig	2001-10-01 04:33:45 UTC
+++ interger.c
@@ -47,11 +47,11 @@
 #include <stdio.h>
 #include <stdlib.h>
 
-#define BIG_ENDIAN    2
-#define LITTLE_ENDIAN 1
+#define XL_BIG_ENDIAN    2
+#define XL_LITTLE_ENDIAN 1
 
 static size_t alloced;
-static int endian;
+static int xlendian;
 
 void
 detect_endian(void) {
@@ -61,9 +61,9 @@ detect_endian(void) {
 	end = (*a != 0x11); 
 	// printf("The endianess is %s!\n", ((end==1)?"big":"little"));
 	if (end == 1) {
-		endian = BIG_ENDIAN;
+		xlendian = XL_BIG_ENDIAN;
 	} else {
-		endian = LITTLE_ENDIAN;
+		xlendian = XL_LITTLE_ENDIAN;
 	}
 }
 
@@ -112,7 +112,7 @@ double4byte(double *d, int b1, int b2, i
 	ieee = (unsigned char *) d;
 	for (i = 0; i < 8; i++) ieee[i] = 0;
 
-	if (endian == BIG_ENDIAN) {
+	if (xlendian == XL_BIG_ENDIAN) {
 		//printf("Big Endian!!!\n");
 		ieee[0] = ((int)b4) & 0xff;
 		ieee[1] = ((int)b3) & 0xff;
@@ -159,7 +159,7 @@ double8byte(double *d, int b1, int b2, i
 
 	for (i = 0; i < 8; i++) ieee[i] = 0;
 
-	if (endian == BIG_ENDIAN) {
+	if (xlendian == XL_BIG_ENDIAN) {
 		// printf("Big Endian!!!\n");
 		ieee[0] = ((int)b8) & 0xff;
 		ieee[1] = ((int)b7) & 0xff;
