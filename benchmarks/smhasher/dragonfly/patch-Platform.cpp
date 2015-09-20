--- Platform.cpp.bak	2015-09-20 12:56:13.000000000 +0300
+++ Platform.cpp
@@ -51,6 +51,12 @@ SetAffinity(int cpu)
     }
 }
 
+#elif defined(__DragonFly__)
+void SetAffinity ( int /*cpu*/ )
+{
+/* XXX */
+}
+
 #else
 
 #include <sched.h>
