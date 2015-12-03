--- include/LogEntry.h.orig	2015-12-02 17:53:42.133762000 +0100
+++ include/LogEntry.h	2015-12-02 17:54:11.684029000 +0100
@@ -36,7 +36,7 @@
 #include <sys/time.h>
 #include <net/if.h>
 #include <netinet/in.h>
-#include <net/pfvar.h>
+#include <net/pf/pfvar.h>
 #include <string>
 
 using namespace std;
