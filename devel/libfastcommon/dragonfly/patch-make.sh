--- make.sh.orig	2020-08-09 16:30:23.683928000 +0200
+++ make.sh	2020-08-09 16:56:12.378969000 +0200
@@ -96,7 +96,7 @@
 {
     sed_cmd=$1
     filename=$2
-    if [ "$uname" = "FreeBSD" -o "$name" = "DragonFly" ]; then
+    if [ "$uname" = "FreeBSD" -o "$uname" = "DragonFly" ]; then
        sed -i "" "$sed_cmd" $filename
     else
        sed -i "$sed_cmd" $filename
