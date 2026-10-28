--- vendor/llama.cpp/vendor/sheredom/subprocess.h.orig
+++ vendor/llama.cpp/vendor/sheredom/subprocess.h
@@ -281,7 +281,10 @@
    macro folds to 0 and so answers correctly. Define this yourself to override
    the detection, for instance on musl older than 1.1.24. */
 #if !defined(SUBPROCESS_HAVE_CWD)
-#if defined(__GLIBC__)
+#if defined(__DragonFly__)
+/* DragonFly: no posix_spawn_file_actions_addchdir(_np). */
+#define SUBPROCESS_HAVE_CWD 0
+#elif defined(__GLIBC__)
 #if __GLIBC_PREREQ(2, 29)
 #define SUBPROCESS_HAVE_CWD 1
 #else
