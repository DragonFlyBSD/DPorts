--- response.c.intermediate	2016-08-17 10:25:25 UTC
+++ response.c
@@ -56,7 +56,7 @@ static ssize_t xsendfile(int out, int in
     return sendfile(out, in, &offset, bytes);
 }
 
-#elif defined(__FreeBSD__) && !defined(NO_SENDFILE)
+#elif (defined(__DragonFly__) || defined(__FreeBSD__)) && !defined(NO_SENDFILE)
 
 static ssize_t xsendfile(int out, int in, off_t offset, off_t off_bytes)
 {
