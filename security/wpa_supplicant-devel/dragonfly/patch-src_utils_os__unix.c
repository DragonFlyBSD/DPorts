--- src/utils/os.h.intermediate	2021-12-22 20:16:46.000000000 +0000
+++ src/utils/os.h
@@ -246,7 +246,7 @@ char * os_readfile(const char *name, siz
  */
 int os_file_exists(const char *fname);
 
-#if !defined __FreeBSD__ && !defined __DragonFly__
+#if !defined __FreeBSD__
 /**
  * os_fdatasync - Sync a file's (for a given stream) state with storage device
  * @stream: the stream to be flushed
