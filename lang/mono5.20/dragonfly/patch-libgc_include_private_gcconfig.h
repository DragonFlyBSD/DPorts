--- libgc/include/private/gcconfig.h.orig	2019-07-16 18:16:09 UTC
+++ libgc/include/private/gcconfig.h
@@ -59,6 +59,12 @@
 #    define FREEBSD
 # endif
 
+/* DragonFly is source-compatible with FreeBSD for the GC's purposes. */
+/* Map it onto the FREEBSD paths below so machine/OS detection works. */
+# if defined(__DragonFly__) && !defined(FREEBSD)
+#    define FREEBSD
+# endif
+
 /* And one for Darwin: */
 # if defined(macosx) || (defined(__APPLE__) && defined(__MACH__))
 #   define DARWIN
@@ -2272,14 +2278,15 @@
 #   define SUNOS5SIGS
 # endif
 
-# if defined(FREEBSD) && ((__FreeBSD__ >= 4) || (__FreeBSD_kernel__ >= 4))
+# if defined(FREEBSD) && ((defined(__FreeBSD__) && __FreeBSD__ >= 4) || (defined(__FreeBSD_kernel__) && __FreeBSD_kernel__ >= 4) || defined(__DragonFly__))
 #   define SUNOS5SIGS
 # endif
 
 # if defined(SVR4) || defined(LINUX) || defined(IRIX5) || defined(HPUX) \
 	    || defined(OPENBSD) || defined(NETBSD) || defined(FREEBSD) \
 	    || defined(DGUX) || defined(BSD) || defined(SUNOS4) \
-	    || defined(_AIX) || defined(DARWIN) || defined(OSF1) || defined(HAIKU)
+	    || defined(_AIX) || defined(DARWIN) || defined(OSF1) || defined(HAIKU) \
+	    || defined(__DragonFly__)
 #   define UNIX_LIKE   /* Basic Unix-like system calls work.	*/
 # endif
 
