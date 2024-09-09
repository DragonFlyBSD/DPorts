diff --git sandbox/policy/sandbox.h sandbox/policy/sandbox.h
index 0ddbb988b3e..e1ca2902cc5 100644
--- src/3rdparty/chromium/sandbox/policy/sandbox.h
+++ src/3rdparty/chromium/sandbox/policy/sandbox.h
@@ -14,7 +14,7 @@
 
 #if BUILDFLAG(IS_BSD)
 #include "sandbox/policy/openbsd/sandbox_openbsd.h"
-#endif  
+#endif
 
 namespace sandbox {
 namespace mojom {
