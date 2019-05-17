--- m4/ax_check_java.m4.intermediate	2019-05-02 20:44:32 UTC
+++ m4/ax_check_java.m4
@@ -79,7 +79,7 @@ dnl now find the java dirs
     linux*)
       java_extra_inc=linux
       ;;
-    *freebsd*)
+    *freebsd*|*dragonfly*)
       java_extra_inc=freebsd
       ;;
     darwin*)
