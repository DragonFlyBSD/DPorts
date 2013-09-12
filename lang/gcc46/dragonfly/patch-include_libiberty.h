--- include/libiberty.h.orig	2011-01-03 20:52:22.000000000 +0000
+++ include/libiberty.h
@@ -2,6 +2,7 @@
 
    Copyright 1997, 1998, 1999, 2000, 2001, 2002, 2003, 2004, 2005,
    2006, 2007, 2008, 2009, 2010 Free Software Foundation, Inc.
+   Copyright 2010, 2011 John Marino <http://www.dragonlace.net>
    
    Note - certain prototypes declared in this header file are for
    functions whoes implementation copyright does not belong to the
@@ -102,7 +103,16 @@ extern int writeargv PARAMS ((char **, F
    to find the declaration so provide a fully prototyped one.  If it
    is 1, we found it so don't provide any declaration at all.  */
 #if !HAVE_DECL_BASENAME
-#if defined (__GNU_LIBRARY__ ) || defined (__linux__) || defined (__FreeBSD__) || defined (__OpenBSD__) || defined(__NetBSD__) || defined (__CYGWIN__) || defined (__CYGWIN32__) || defined (__MINGW32__) || defined (HAVE_DECL_BASENAME)
+#if defined (__GNU_LIBRARY__)	\
+ || defined (__linux__) 	\
+ || defined (__FreeBSD__)	\
+ || defined (__OpenBSD__)	\
+ || defined (__NetBSD__)	\
+ || defined (__DragonFly__)	\
+ || defined (__CYGWIN__)	\
+ || defined (__CYGWIN32__)	\
+ || defined (__MINGW32__)	\
+ || defined (HAVE_DECL_BASENAME)
 extern char *basename (const char *);
 #else
 /* Do not allow basename to be used if there is no prototype seen.  We
