--- lib/HTS_misc.c.intermediate	2019-06-10 12:31:10.000000000 +0000
+++ lib/HTS_misc.c
@@ -245,7 +245,7 @@ size_t HTS_ftell(HTS_File * fp)
    } else if (fp->type == HTS_FILE) {
       fpos_t pos;
       fgetpos((FILE *) fp->pointer, &pos);
-#if defined(_WIN32) || defined(__CYGWIN__) || defined(__APPLE__) || defined(__ANDROID__) || defined(__FreeBSD__)
+#if defined(_WIN32) || defined(__CYGWIN__) || defined(__APPLE__) || defined(__ANDROID__) || defined(__FreeBSD__) || defined(__DragonFly__)
       return (size_t) pos;
 #else
       return (size_t) pos.__pos;
