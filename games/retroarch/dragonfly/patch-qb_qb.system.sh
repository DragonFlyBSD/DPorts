--- qb/qb.system.sh.orig	2015-07-19 12:50:27.000000000 +0300
+++ qb/qb.system.sh
@@ -9,7 +9,7 @@
 if [ -z "$CROSS_COMPILE" ] || [ -z "$OS" ]; then
 	case "$(uname)" in
 		'Linux') OS='Linux';;
-		*'BSD') OS='BSD';;
+		*'BSD'|'DragonFly') OS='BSD';;
 		'Darwin') OS='Darwin';;
 		'CYGWIN'*) OS='Cygwin';;
 		'Haiku') OS='Haiku';;
