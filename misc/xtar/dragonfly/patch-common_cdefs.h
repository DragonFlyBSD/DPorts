--- common/cdefs.h.orig	1995-05-09 08:06:46 UTC
+++ common/cdefs.h
@@ -22,6 +22,11 @@
 #ifndef COMMON_CDEFS_H
 #define COMMON_CDEFS_H		1
 
+#include <sys/types.h> /* for ushort */
+#include <stdio.h> /* for sprintf() */
+#include <stdlib.h> /* for exit(), malloc(), free() */
+#include <string.h> /* for strlen(), strcpy() */
+
 /* Change case of character */
 #define locase(c)		(((c)<='Z')&&((c)>='A')?((c)+32):(c))
 #define upcase(c)		(((c)<='z')&&((c)>='a')?((c)-32):(c))
