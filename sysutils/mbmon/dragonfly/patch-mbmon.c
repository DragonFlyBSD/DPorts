--- mbmon.c.intermediate	2013-04-14 19:48:03.899064000 +0000
+++ mbmon.c
@@ -30,6 +30,10 @@
 #include <netinet/in.h>
 #include <arpa/inet.h>
 
+#ifdef __DragonFly__
+#undef HAVE_GETUTENT
+#endif
+
 #ifdef HAVE_GETUTENT
 #  include <utmp.h>
 #else
