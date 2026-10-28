--- lib/obstack.c.orig	2026-10-26 02:11:19 UTC
+++ lib/obstack.c
@@ -347,7 +347,7 @@ print_and_abort (void)
    abort gracefully or use longjump - but shouldn't return.  This
    variable by default points to the internal function
    'print_and_abort'.  */
-__attribute_noreturn__ void (*obstack_alloc_failed_handler) (void)
+void (*obstack_alloc_failed_handler) (void)
   = print_and_abort;
 # endif /* !_OBSTACK_NO_ERROR_HANDLER */
 #endif /* !_OBSTACK_ELIDE_CODE */
