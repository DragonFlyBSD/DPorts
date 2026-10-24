--- plugins/GSdx/stdafx.cpp.orig	2020-10-29 23:31:05 UTC
+++ plugins/GSdx/stdafx.cpp
@@ -155,7 +155,7 @@ void* vmalloc(size_t size, bool code)
 
 	if(code) {
 		prot |= PROT_EXEC;
-#ifdef _M_AMD64
+#if defined(_M_AMD64) && !defined(__DragonFly__)
 		flags |= MAP_32BIT;
 #endif
 	}
