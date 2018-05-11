--- src/smtp-gated.c.intermediate	2018-02-22 14:24:00.000000000 +0000
+++ src/smtp-gated.c
@@ -820,11 +820,7 @@ void cleanup()
 	}
 } /* cleanup() */
 
-#ifdef __clang__
 static inline void cleanup_exit(int code)
-#else
-inline void cleanup_exit(int code)
-#endif
 {
 	cleanup();
 	exit(code);
