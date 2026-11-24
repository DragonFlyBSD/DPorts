--- src/bif_os.c.orig
+++ src/bif_os.c
@@ -1129,7 +1129,7 @@
 				// unsuffixed call for an older target too, but it weak-links
 				// and is null at runtime on the OS actually being targeted.
 #if (defined(__GLIBC__) && (__GLIBC__ < 2 || (__GLIBC__ == 2 && __GLIBC_MINOR__ < 29))) \
-	|| defined(__OpenBSD__)
+	|| defined(__OpenBSD__) || defined(__DragonFly__)
 				return throw_error(q, c, c_ctx, "system_error", "posix_spawn_file_actions_addchdir");
 #else
 				const char *cwd = C_STR(q, name);
