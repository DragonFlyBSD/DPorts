--- src/ncmpcpp.cpp.orig	2017-05-21 14:10:48.000000000 +0000
+++ src/ncmpcpp.cpp	2017-07-04 02:52:17.000000000 +0000
@@ -108,7 +108,7 @@
 	cerr_buffer = std::cerr.rdbuf();
 	std::cerr.rdbuf(errorlog.rdbuf());
 	
-	sigignore(SIGPIPE);
+	signal(SIGPIPE, sighandler);
 	signal(SIGWINCH, sighandler);
 
 	Mpd.setNoidleCallback(Status::update);
