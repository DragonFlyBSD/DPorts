$FreeBSD: head/x11-wm/afterstep-stable/files/patch-safemalloc.h 340725 2014-01-22 17:40:44Z mat $

--- libAfterBase/safemalloc.h.orig	Mon Sep 13 13:48:08 2004
+++ libAfterBase/safemalloc.h	Mon Sep 13 13:48:40 2004
@@ -1,7 +1,7 @@
 #ifndef SAFEMALLOC_H_HEADER_INCLUDED
 #define SAFEMALLOC_H_HEADER_INCLUDED
 
-#ifdef HAVE_MALLOC_H
+#if defined(HAVE_MALLOC_H) && !defined(__FreeBSD__)
 #include <malloc.h>
 #else
 #ifdef HAVE_STDLIB_H
