--- agent/scim-bridge-agent-application.cpp.orig	2009-01-17 19:04:20.000000000 +0200
+++ agent/scim-bridge-agent-application.cpp
@@ -65,7 +65,7 @@ int main (int argc, char *argv[])
     unsigned int tmp_uint;
 
     int option = 0;
-    while (option != EOF) {
+    while (option != -1) {
         option = getopt_long (argc, argv, short_options, long_options, NULL);
         switch (option) {
             case 'v':
