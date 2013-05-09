
$FreeBSD: lang/erlang/files/patch-erts_etc_common_erlc.c 300896 2012-07-14 13:54:48Z beat $

--- erts/etc/common/erlc.c.orig
+++ erts/etc/common/erlc.c
@@ -186,6 +186,7 @@
      */
 
     PUSH("-noinput");
+    PUSH2("-smp", "disable");
     PUSH2("-mode", "minimal");
     PUSH2("-boot", "start_clean");
     PUSH3("-s", "erl_compile", "compile_cmdline");
