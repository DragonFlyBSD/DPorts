Reindent to avoid false positives.

--- src/target.cc.orig	2005-07-27 08:38:17 UTC
+++ src/target.cc
@@ -110,21 +110,21 @@ int Target_Net::init(char *target) {
     counter = ntohl(addr);
     return OK;
 }
-    
+
 unsigned long Target_Net::getnext(void) {
 
-    if (counter > ntohl(addr|mask^0xffffffff))
+    if (counter > ntohl(addr|(mask^0xffffffff)))
         return 0;
-	if (counter == htonl(addr)) { // network number
-		if (mask != 0xffffffff) { // special case of /32
-			counter++;
-		}
-		return (htonl(counter++));
-	}
-	if (ntohl(mask^0xffffffff) == (counter & ntohl(mask^0xffffffff))){ // broadcast address
-		return 0;
+    if (counter == htonl(addr)) { // network number
+	if (mask != 0xffffffff) { // special case of /32
+		counter++;
 	}
 	return (htonl(counter++));
+   }
+   if (ntohl(mask^0xffffffff) == (counter & ntohl(mask^0xffffffff))){ // broadcast address
+	return 0;
+   }
+   return (htonl(counter++));
 }
 
 
