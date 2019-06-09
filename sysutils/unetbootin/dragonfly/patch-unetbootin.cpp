--- unetbootin.cpp.intermediate	2019-06-04 07:53:20.000000000 +0000
+++ unetbootin.cpp
@@ -654,7 +654,11 @@ QStringList unetbootin::listsanedrives()
 				*/
 		#endif
 #ifdef Q_OS_FREEBSD
+#ifdef __DragonFly__
+		struct vfsconf fsconf;
+#else
 		struct xvfsconf fsconf;
+#endif
 		struct statfs *fslist;
 
 		/*
