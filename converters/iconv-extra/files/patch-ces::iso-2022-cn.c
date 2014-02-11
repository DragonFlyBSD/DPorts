
$FreeBSD: head/converters/iconv-extra/files/patch-ces::iso-2022-cn.c 340725 2014-01-22 17:40:44Z mat $

--- ces/iso-2022-cn.c	2002/03/17 11:15:25	1.1
+++ ces/iso-2022-cn.c	2002/03/17 11:15:46
@@ -31,7 +31,7 @@
  */
 
 #define ICONV_INTERNAL
-#include <iconv.h>
+#include <biconv.h>
 
 static const iconv_ces_iso2022_ccs ccsattr[] = {
 	{"us-ascii",		"",        0, ICONV_SHIFT_SI},
