
$FreeBSD: mail/muttzilla/files/patch-mzbase.c 300896 2012-07-14 13:54:48Z beat $

--- mzbase.c.orig	Sun Feb 16 16:35:13 2003
+++ mzbase.c	Sun Feb 16 16:35:28 2003
@@ -25,6 +25,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <string.h>
 #include <sys/stat.h>
 #include <unistd.h>
 #include <fcntl.h>
