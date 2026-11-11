--- ior_mach.c.orig
+++ ior_mach.c
@@ -412,7 +412,7 @@
     };	
 
 #else
-#if	defined(IOR_LARGE_FILES) && defined(__FreeBSD__)
+#if	defined(IOR_LARGE_FILES) && (defined(__FreeBSD__) || defined(__DragonFly__))
 #define	IOR_SET_LOCK_FLAG	F_SETLK
     struct flock d_lock;		/* lock command to run */
 #else
@@ -492,7 +492,7 @@
     };	
 
 #else
-#if	defined(IOR_LARGE_FILES) && defined(__FreeBSD__)
+#if	defined(IOR_LARGE_FILES) && (defined(__FreeBSD__) || defined(__DragonFly__))
 #define	IOR_SET_LOCK_FLAG	F_SETLK
     struct flock d_lock;		/* lock command to run */
 #else
