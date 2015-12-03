--- include/LogParser.h.orig	2015-12-02 17:53:28.543640000 +0100
+++ include/LogParser.h	2015-12-02 17:54:02.413944000 +0100
@@ -35,8 +35,8 @@
 #include <sys/socket.h>
 #include <net/if.h>
 #include <netinet/in.h>
-#include <net/pfvar.h>
-#include <net/if_pflog.h>
+#include <net/pf/pfvar.h>
+#include <net/pf/if_pflog.h>
 #include <netinet/in_systm.h>
 #include <netinet/ip.h>
 #include <netinet/tcp.h>
@@ -44,6 +44,7 @@
 #include <pcap.h>
 #include <string>
 #include <vector>
+#include <cstddef>
 
 #include "LogEntry.h"
 
