--- ext/rbtrace.c.intermediate	2019-05-04 10:54:17 UTC
+++ ext/rbtrace.c
@@ -48,6 +48,8 @@
  #define PLATFORM_FREEBSD
 #elif __OpenBSD__
  #define PLATFORM_OPENBSD
+#elif __DragonFly__
+ #define PLATFORM_DRAGONFLY
 #endif
 
 
@@ -965,7 +967,7 @@ rbtrace__process_event(msgpack_object cm
     if (outer == 0) {
       rb_eval_string_protect("$0 = \"[DEBUG] #{Process.ppid}\"", 0);
 
-#if defined(PLATFORM_FREEBSD) || defined(PLATFORM_OPENBSD)
+#if defined(PLATFORM_FREEBSD) || defined(PLATFORM_OPENBSD) || defined(PLATFORM_DRAGONFLY)
       // The call setpgrp() is equivalent to setpgid(0,0).
       setpgid(0,0);
 #else
