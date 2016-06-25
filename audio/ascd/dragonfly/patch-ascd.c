--- ascd.c.orig	1999-07-05 18:58:51.000000000 +0200
+++ ascd.c
@@ -63,7 +63,9 @@ XpmIcon iconXPM;
 
 /* External functions */
 
+#ifndef __DragonFly__
 extern time();
+#endif
 extern open();
 extern cd_control(int);
 extern cd_control_version();
