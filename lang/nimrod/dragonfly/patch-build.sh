--- build.sh.intermediate	2014-06-25 20:55:29.620149000 +0000
+++ build.sh
@@ -39,7 +39,7 @@ case $uos in
     myos="linux" 
     LINK_FLAGS="$LINK_FLAGS -ldl -lm"
     ;;
-  *freebsd* ) 
+  *freebsd* | *dragonfly* ) 
     myos="freebsd"
     LINK_FLAGS="$LINK_FLAGS -lm"
     ;;
@@ -6089,7 +6089,7 @@ build/2_1/parseopt.o
     ;;
   esac
   ;;
-freebsd) 
+dragonfly|freebsd) 
   case $mycpu in
   i386)
     echo "$CC $COMP_FLAGS -Ibuild -c build/5_1/nimrod.c -o build/5_1/nimrod.o"
