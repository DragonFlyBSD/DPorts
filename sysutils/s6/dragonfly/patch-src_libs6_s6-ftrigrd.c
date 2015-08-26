--- src/libs6/s6-ftrigrd.c.orig	2015-01-05 20:00:48 UTC
+++ src/libs6/s6-ftrigrd.c
@@ -82,7 +82,7 @@ static void answer (char c)
   }
 }
 
-static void remove (unsigned int i)
+static void s6remove (unsigned int i)
 {
   ftrigio_deepfree(a + i) ;
   a[i] = a[--n] ;
@@ -130,7 +130,7 @@ static int parse_protocol (unixmessage_t
     {
       register unsigned int i = 0 ;
       for (; i < n ; i++) if (a[i].id == id) break ;
-      if (i < n) remove(i) ;
+      if (i < n) s6remove(i) ;
       answer(0) ;
       break ;
     }
@@ -249,7 +249,7 @@ int main (void)
     for (i = 0 ; i < n ; i++)
     {
       if (x[a[i].xindex].revents & IOPAUSE_READ)
-        if (!ftrigio_read(a+i)) remove(i--) ;
+        if (!ftrigio_read(a+i)) s6remove(i--) ;
     }
 
    /* client is writing */
