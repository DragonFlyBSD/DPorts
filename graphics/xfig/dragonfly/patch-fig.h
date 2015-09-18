--- fig.h.orig	2011-02-18 21:43:48.000000000 +0200
+++ fig.h
@@ -55,7 +55,7 @@ extern char	*strerror();
       extern int	errno;
       extern int	sys_nerr;
 #     if ( !(defined(BSD) && (BSD - 0 >= 199306)) && !defined(__NetBSD__) && \
-	   !defined(__GNU_LIBRARY__) && !defined(__FreeBSD__) && !defined(__GLIBC__))
+	   !defined(__GNU_LIBRARY__) && !defined(__FreeBSD__) && !defined(__DragonFly__) && !defined(__GLIBC__))
 	 extern char    *sys_errlist[];
 #     endif
 #  endif
@@ -375,7 +375,7 @@ extern	double		drand48();
 extern	long		random();
 extern	void		srandom(unsigned int);
 
-#elif !defined(__osf__) && !defined(__CYGWIN__) && !defined(linux) && !defined(__FreeBSD__) && !defined(__GLIBC__)
+#elif !defined(__osf__) && !defined(__CYGWIN__) && !defined(linux) && !defined(__FreeBSD__) && !defined(__DragonFly__)  && !defined(__GLIBC__)
 extern	void		srandom(int);
 
 #endif
