--- dlls/ntdll/unix/signal_x86_64.c.orig	2025-11-06 09:54:15 UTC
+++ dlls/ntdll/unix/signal_x86_64.c
@@ -2933,7 +2933,11 @@ void set_thread_teb( TEB *teb )
 
 void set_thread_teb( TEB *teb )
 {
+#if defined __linux__
     arch_prctl( ARCH_SET_GS, teb );
+#elif defined (__FreeBSD__)
+    amd64_set_gsbase( teb );
+#endif
 }
 
 /***********************************************************************
