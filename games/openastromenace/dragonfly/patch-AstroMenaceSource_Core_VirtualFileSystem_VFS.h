--- AstroMenaceSource/Core/VirtualFileSystem/VFS.h.orig	2013-05-16 11:04:45.000000000 +0300
+++ AstroMenaceSource/Core/VirtualFileSystem/VFS.h
@@ -176,6 +176,7 @@ struct eFILE
 	// Get current position in the file
 	long ftell();
 	// Check End-of-File indicator
+#undef feof
 	int feof();
 	// Get string from stream
 	char *fgets(char *str, int num);
