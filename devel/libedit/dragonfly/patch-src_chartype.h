--- src/chartype.h.orig	2017-03-29 18:08:21 UTC
+++ src/chartype.h
@@ -33,14 +33,6 @@
  * supports non-BMP code points without requiring UTF-16, but nothing
  * seems to actually advertise this properly, despite Unicode 3.1 having
  * been around since 2001... */
-#if !defined(__NetBSD__) && !defined(__sun) && !(defined(__APPLE__) && defined(__MACH__)) && !defined(__OpenBSD__) && !defined(__FreeBSD__)
-#ifndef __STDC_ISO_10646__
-/* In many places it is assumed that the first 127 code points are ASCII
- * compatible, so ensure wchar_t indeed does ISO 10646 and not some other
- * funky encoding that could break us in weird and wonderful ways. */
-	#error wchar_t must store ISO 10646 characters
-#endif
-#endif
 
 /* Oh for a <uchar.h> with char32_t and __STDC_UTF_32__ in it...
  * ref: ISO/IEC DTR 19769
