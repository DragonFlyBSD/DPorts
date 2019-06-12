--- defs.h.intermediate	2019-06-01 05:05:52.000000000 +0000
+++ defs.h
@@ -184,7 +184,7 @@ __inline void *qmemcpy(void *dst, const
 // Typedef for the function pointer
 typedef void (*_PVFV)(void);
 
-#if defined(_MSC_VER) && !(defined(__APPLE__)|| defined(__FreeBSD__))
+#if defined(_MSC_VER) && !(defined(__APPLE__)|| defined(__FreeBSD__) || defined(__DragonFly__))
 // Define our segment names
 #define SEGMENT_C_INIT ".CRT$XCU"
 
