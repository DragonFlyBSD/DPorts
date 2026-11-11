--- qcommon/qcommon.h.orig
+++ qcommon/qcommon.h
@@ -97,6 +97,12 @@
 		#define CPUSTRING "Unknown"
 	#endif
 
+#elif defined __DragonFly__
+
+	#define BUILDSTRING "DragonFly"
+	#define __cdecl
+	#define CPUSTRING "x86_64"
+
 #else	// !WIN32
 
 	#error Unknown architecture, please update qcommon.h!
