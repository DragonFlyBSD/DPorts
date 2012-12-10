
$FreeBSD: ports/audio/flite/files/patch-tools-funds_sts_main.c,v 1.2 2012/11/17 05:54:31 svnexp Exp $

Tags: for-upstream

The standard headers must be included before the behavior gets undefined
by the following macro definition.

--- tools/find_sts_main.c.orig	2005-01-01 15:04:43.000000000 +0100
+++ tools/find_sts_main.c	2007-01-21 04:36:17.750982588 +0100
@@ -40,6 +40,8 @@
 #include <stdio.h>
 #include <math.h>
 #include <string.h>
+#include <stdlib.h>
+#include <unistd.h>
 
 /* To allow some normally const fields to manipulated during building */
 #define const
