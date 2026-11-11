--- client/cl_main.c.orig
+++ client/cl_main.c
@@ -4314,7 +4314,7 @@
 	Cbuf_Execute ();
 
 	Con_Init ();	
-#if defined __linux__ || defined __sgi || defined __FreeBSD__
+#if defined __linux__ || defined __sgi || defined __FreeBSD__ || defined __DragonFly__
 	S_Init (true);	
 
 	VID_Init ();
