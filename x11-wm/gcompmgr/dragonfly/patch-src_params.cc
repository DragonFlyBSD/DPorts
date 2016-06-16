--- src/params.cc.orig	2016-06-16 13:14:29.000000000 +0300
+++ src/params.cc
@@ -133,7 +133,11 @@ int getxcomppid(const string& searchstr)
 	char buffer[BUFSIZE+1];
 	int chars_read;
 	memset(buffer, '\0', sizeof(buffer));
+#ifdef __DragonFly__
+	string search = "ps -xa | grep ";
+#else
 	string search = "ps -A | grep ";
+#endif
 	search += searchstr;
 	read_fp = popen(search.c_str(), "r");
 	if (read_fp != NULL) {
