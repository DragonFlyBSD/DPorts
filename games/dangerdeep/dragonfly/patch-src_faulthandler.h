--- src/faulthandler.h.bak	2015-12-06 12:49:53.000000000 +0200
+++ src/faulthandler.h
@@ -110,7 +110,11 @@ inline void print_stack_trace()
 
 	// determine lines from addresses
 	std::ostringstream oss;
+#ifdef __DragonFly__
+	oss << "addr2line -e /proc/" << getpid() << "/file -s " << addrs;
+#else
 	oss << "addr2line -e /proc/" << getpid() << "/exe -s " << addrs;
+#endif
 	FILE* f = popen(oss.str().c_str(), "r");
 	if (f) {
 		for (std::list<std::string>::iterator it = lines.begin(); it != lines.end(); ++it) {
