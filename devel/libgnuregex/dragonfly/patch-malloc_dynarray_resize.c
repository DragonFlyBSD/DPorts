--- malloc/dynarray_resize.c.orig
+++ malloc/dynarray_resize.c
@@ -20,6 +20,23 @@
 
 #include <dynarray.h>
 #include <errno.h>
-#include <stdckdint.h>
+#ifdef __DragonFly__
+/* DragonFly: no C23 <stdckdint.h>; ckd_* mapped to builtins below. */
+#elif defined(__has_include)
+# if __has_include(<stdckdint.h>)
+#  include <stdckdint.h>
+# endif
+#else
+# include <stdckdint.h>
+#endif
+#ifndef ckd_add
+# define ckd_add(r, a, b) __builtin_add_overflow ((a), (b), (r))
+#endif
+#ifndef ckd_sub
+# define ckd_sub(r, a, b) __builtin_sub_overflow ((a), (b), (r))
+#endif
+#ifndef ckd_mul
+# define ckd_mul(r, a, b) __builtin_mul_overflow ((a), (b), (r))
+#endif
 #include <stdlib.h>
