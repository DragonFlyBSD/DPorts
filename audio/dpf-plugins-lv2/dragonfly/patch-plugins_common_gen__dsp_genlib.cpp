--- plugins/common/gen_dsp/genlib.cpp.intermediate	2019-06-08 16:11:07.000000000 +0000
+++ plugins/common/gen_dsp/genlib.cpp
@@ -30,6 +30,7 @@ OR THE USE OR OTHER DEALINGS IN THE SOFT
 # include <malloc/malloc.h>
 #else
 # include <stdlib.h>
+#ifndef __DragonFly__
 #include <malloc_np.h>
 # if DISTRHO_OS_WINDOWS
 #  define malloc_size _msize
@@ -37,6 +38,7 @@ OR THE USE OR OTHER DEALINGS IN THE SOFT
 #  define malloc_size malloc_usable_size
 # endif
 #endif
+#endif
 
 // DATA_MAXIMUM_ELEMENTS * 8 bytes = 256 mb limit
 #define DATA_MAXIMUM_ELEMENTS	(33554432)
@@ -69,19 +71,28 @@ t_ptr sysmem_resizeptr(void *ptr, t_ptr_
 
 t_ptr sysmem_resizeptrclear(void *ptr, t_ptr_size newsize)
 {
+#ifndef __DragonFly__
 	t_ptr_size oldsize = malloc_size(ptr);
+#endif
 	t_ptr p = (t_ptr)realloc(ptr, newsize);
-	
+
+#ifndef __DragonFly__
 	if (p) {
 		if (newsize > oldsize)
 			my_memset((char *)p + oldsize, 0, newsize - oldsize);
 	}	
+#endif
 	return p;
 }
 
 t_ptr_size sysmem_ptrsize(void *ptr)
 {
+#ifdef __DragonFly__
+	/* do not rely on such things */
+	return 0;
+#else
 	return malloc_size(ptr);
+#endif
 }
 
 void sysmem_freeptr(void *ptr)
