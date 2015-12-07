--- src/debug.c.orig	2001-01-14 00:09:50.000000000 +0200
+++ src/debug.c
@@ -166,6 +166,9 @@ void setup_diagnostic_log()
        public domain */
     newfp = freopen(BUGREPORT_FILE, "w", stderr);
     if ( newfp == NULL ) {	/* This happens on NT */
+#ifdef __DragonFly__
+	fprintf(stderr, "Disabled on DragonFly\n\n");
+#else
 #if !defined(stderr)
 	stderr = fopen(BUGREPORT_FILE, "w");
 #else
@@ -174,6 +177,7 @@ void setup_diagnostic_log()
 	    *stderr = *newfp;
 	}
 #endif
+#endif
     }
 
     /* Write bug report header */
