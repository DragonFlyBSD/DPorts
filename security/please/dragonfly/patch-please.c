--- please.c.orig	2015-09-13 03:24:04.000000000 +0300
+++ please.c
@@ -30,7 +30,7 @@
 #include <unistd.h>
 #include <security/pam_appl.h>
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 # include <security/openpam.h>
 #elif defined(__linux__)
 # include <security/pam_misc.h>
@@ -40,7 +40,7 @@
 
 int authenticate()
 {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     struct pam_conv pamc = { &openpam_ttyconv, NULL };
 #elif defined(__linux__)
     struct pam_conv pamc = { &misc_conv, NULL };
