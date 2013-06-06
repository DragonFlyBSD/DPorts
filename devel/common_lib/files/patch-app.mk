
$FreeBSD: devel/common_lib/files/patch-app.mk 318429 2013-05-18 13:02:11Z olgeni $

--- app.mk.orig
+++ app.mk
@@ -25,7 +25,7 @@
 CD = cd
 CP = cp -vf
 ECHO = echo
-ERLDOC = ndoc
+ERLDOC = txt2tags
 LN = ln -sf
 MKDIR = mkdir
 MV = mv -vf
