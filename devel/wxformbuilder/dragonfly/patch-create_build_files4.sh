--- create_build_files4.sh.intermediate	2016-12-17 14:04:46.000000000 +0200
+++ create_build_files4.sh
@@ -78,6 +78,8 @@ platform="unknown"
 
 if ( [ "$isbsd" -gt "0" ] ); then
     platform="bsd"
+elif [ "$unamestr" = "DragonFly" ]; then
+    platform="bsd"
 elif [ "$unamestr" = "Linux" ]; then
     platform="linux"
 elif [ "$unamestr" = "Darwin" ]; then
