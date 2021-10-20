--- src/libs6/s6-ftrigrd.c.orig	2016-01-07 02:09:24.000000000 +0200
+++ src/libs6/s6-ftrigrd.c
@@ -80,7 +80,7 @@ static void answer (char c)
   }
 }
 
-static void remove (unsigned int i)
+static void s6_remove (unsigned int i)
 {
   ftrigio_deepfree(a + i) ;
   a[i] = a[--n] ;
@@ -130,7 +130,7 @@ static int parse_protocol (unixmessage_t
       for (; i < n ; i++) if (a[i].id == id) break ;
       if (i < n)
       {
-        remove(i) ;
+        s6_remove(i) ;
         answer(0) ;
       }
       else answer(EINVAL) ;
@@ -247,7 +247,7 @@ int main (void)
     for (i = 0 ; i < n ; i++)
     {
       if (x[a[i].xindex].revents & IOPAUSE_READ)
-        if (!ftrigio_read(a+i)) remove(i--) ;
+        if (!ftrigio_read(a+i)) s6_remove(i--) ;
     }
 
    /* client is writing */
