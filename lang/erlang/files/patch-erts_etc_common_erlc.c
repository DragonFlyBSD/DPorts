
$FreeBSD: lang/erlang/files/patch-erts_etc_common_erlc.c 340725 2014-01-22 17:40:44Z mat $

--- erts/etc/common/erlc.c.orig
+++ erts/etc/common/erlc.c
@@ -186,6 +186,7 @@
      */
 
     PUSH("-noinput");
+    PUSH2("-smp", "disable");
     PUSH2("-mode", "minimal");
     PUSH2("-boot", "start_clean");
     PUSH3("-s", "erl_compile", "compile_cmdline");
