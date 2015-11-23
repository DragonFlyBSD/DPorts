--- cmds.c.orig	2015-11-23 21:59:04.068950000 +0100
+++ cmds.c	2015-11-23 21:59:29.639187000 +0100
@@ -787,9 +787,9 @@ do_mount(int argc, const char ** argv)
 			msdosfs.fspec = (char*) argv[0];
 			if (flags & MNT_RDONLY) {
 				msdosfs.export.ex_flags = MNT_EXRDONLY;
-				msdosfs.mask = msdosfs.dirmask = 0555;
+				msdosfs.mask = 0555;
 			} else {
-				msdosfs.mask = msdosfs.dirmask = 7555;
+				msdosfs.mask = 7555;
 			}
 			args = &msdosfs;
 #ifdef	HAVE_BSD_NTFSMOUNT
