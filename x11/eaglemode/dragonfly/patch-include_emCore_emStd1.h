--- include/emCore/emStd1.h.orig
+++ include/emCore/emStd1.h
@@ -214,6 +214,9 @@
 	typedef unsigned __int32 emUInt32;
 #endif
 
+#if defined(__DragonFly__) && !defined(__WORDSIZE)
+#	define __WORDSIZE (__SIZEOF_LONG__ * 8)
+#endif
 #if (defined(__GNUC__) || defined(__SUNPRO_CC)) && defined(__WORDSIZE)
 #	if __WORDSIZE == 64
 		typedef signed   long emInt64;
