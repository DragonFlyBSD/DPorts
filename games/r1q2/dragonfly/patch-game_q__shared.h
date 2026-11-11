--- game/q_shared.h.orig
+++ game/q_shared.h
@@ -318,7 +318,7 @@
 //float Q_fabs (float f);
 //#define	fabs(f) Q_fabs(f)
 //extern int sse2_enabled;
-#if !defined C_ONLY && !defined __linux__ && !defined __sgi && !defined SSE2 && !defined __FreeBSD__
+#if !defined C_ONLY && !defined __linux__ && !defined __sgi && !defined SSE2 && !defined __FreeBSD__ && !defined __DragonFly__
 //extern void __cdecl Q_sseinit (void);
 void __cdecl Q_ftol2( float f, int *out );
 int __cdecl Q_ftol( float f );
