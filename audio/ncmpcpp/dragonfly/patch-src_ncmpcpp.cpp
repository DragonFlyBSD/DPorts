--- src/ncmpcpp.cpp.orig	2014-12-13 18:03:39 UTC
+++ src/ncmpcpp.cpp
@@ -150,7 +150,7 @@ int main(int argc, char **argv)
 	signal(SIGPIPE, sighandler);
 	signal(SIGWINCH, sighandler);
 	// ignore Ctrl-C
-	sigignore(SIGINT);
+	signal(SIGINT, sighandler);
 #	endif // !WIN32
 	
 	while (!Actions::ExitMainLoop)
