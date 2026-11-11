Include <unistd.h> (and <ctype.h>) for hosted builds, as acfreebsd.h does;
the tools call _exit().

--- source/include/platform/acdragonfly.h.orig
+++ source/include/platform/acdragonfly.h
@@ -226,6 +226,11 @@
 
 #else /* _KERNEL */
 
+#if __STDC_HOSTED__
+#include <ctype.h>
+#include <unistd.h>
+#endif
+
 #define ACPI_USE_STANDARD_HEADERS
 
 #define ACPI_CAST_PTHREAD_T(pthread)    ((ACPI_THREAD_ID) ACPI_TO_INTEGER (pthread))
