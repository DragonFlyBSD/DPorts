
$FreeBSD: head/lang/racket/files/patch-racket_src_mzrt.c 385204 2015-05-02 18:59:17Z olgeni $

--- racket/src/mzrt.c.orig
+++ racket/src/mzrt.c
@@ -267,7 +267,7 @@
       stacksize = UNIX_STACK_MAXIMUM;
 #  endif
   }
-#elif defined(OS_X) || defined(linux)
+#elif defined(OS_X) || defined(linux) || defined(__FreeBSD__)
   stacksize = 8*1024*1024;
 #else
   stacksize = 0;
