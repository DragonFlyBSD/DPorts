--- src/alloc.c.orig	2015-11-26 20:57:34 UTC
+++ src/alloc.c
@@ -397,7 +397,7 @@ static void *pure_alloc (size_t, int);
 /* Return PTR rounded up to the next multiple of ALIGNMENT.  */
 
 static void *
-ALIGN (void *ptr, int alignment)
+EMACS_ALIGN (void *ptr, int alignment)
 {
   return (void *) ROUNDUP ((uintptr_t) ptr, alignment);
 }
@@ -4983,7 +4983,7 @@ pure_alloc (size_t size, int type)
     {
       /* Allocate space for a Lisp object from the beginning of the free
 	 space with taking account of alignment.  */
-      result = ALIGN (purebeg + pure_bytes_used_lisp, GCALIGNMENT);
+      result = EMACS_ALIGN (purebeg + pure_bytes_used_lisp, GCALIGNMENT);
       pure_bytes_used_lisp = ((char *)result - (char *)purebeg) + size;
     }
   else
