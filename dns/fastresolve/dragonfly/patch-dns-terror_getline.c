--- dns-terror/getline.c.intermediate	2016-08-16 15:24:08 UTC
+++ dns-terror/getline.c
@@ -135,7 +135,7 @@ getstr (lineptr, n, stream, terminator,
   return ret;
 }
 
-#if __FreeBSD_version < 800067
+#if defined(__FreeBSD__) && __FreeBSD_version < 800067
 int
 getline (lineptr, n, stream)
      char **lineptr;
