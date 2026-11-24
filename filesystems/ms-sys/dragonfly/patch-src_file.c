--- src/file.c.orig
+++ src/file.c
@@ -22,7 +22,7 @@
 #include "file.h"
 
 #include <unistd.h>
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
 #include <sys/sysctl.h>
 #endif
 
@@ -46,7 +46,7 @@
    unsigned long start_read = ulPosition;
    unsigned long to_read = uiLen;
 
-#if defined(__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
    /* cannot read/write directly from/to disk at random offsets */
    /* must read/write from/to pagesize boundaries */
 
@@ -81,7 +81,7 @@
    unsigned long start_write = ulPosition;
    unsigned long to_write = uiLen;
 
-#if defined (__FreeBSD__) || defined(__OpenBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__) || defined(__OpenBSD__)
    /* cannot read/write directly from/to disk at random offsets */
    /* must read/write from/to pagesize boundaries */
    unsigned long pagesize = sysconf(_SC_PAGE_SIZE);
