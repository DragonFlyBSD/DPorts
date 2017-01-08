--- base/version_git.sh.orig	2016-09-20 05:54:21.000000000 +0300
+++ base/version_git.sh
@@ -52,7 +52,7 @@ fi
 
 date_string=$git_time
 case $(uname) in
-  Darwin | FreeBSD)
+  Darwin | FreeBSD | DragonFly)
     date_string="$(/bin/date -jr $git_time -u '+%Y-%m-%d %H:%M %Z')"
     ;;
   MINGW*)
