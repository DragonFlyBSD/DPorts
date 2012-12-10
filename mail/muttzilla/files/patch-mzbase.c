
$FreeBSD: ports/mail/muttzilla/files/patch-mzbase.c,v 1.2 2012/11/17 05:59:07 svnexp Exp $

--- mzbase.c.orig	Sun Feb 16 16:35:13 2003
+++ mzbase.c	Sun Feb 16 16:35:28 2003
@@ -25,6 +25,7 @@
 
 #include <stdio.h>
 #include <stdlib.h>
+#include <string.h>
 #include <sys/stat.h>
 #include <unistd.h>
 #include <fcntl.h>
