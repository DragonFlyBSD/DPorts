--- src/cmd/vbackup/mount-BSD.c.orig	2020-01-23 12:26:56 UTC
+++ src/cmd/vbackup/mount-BSD.c
@@ -12,6 +12,9 @@
 #if defined(__FreeBSD_version) && __FreeBSD_version >= 800000
 #include <fs/nfs/rpcv2.h>
 #include <fs/nfs/nfsproto.h>
+#elif defined(__DragonFly__)
+#include <vfs/nfs/rpcv2.h>
+#include <vfs/nfs/nfsproto.h>
 # else
 #include <nfs/rpcv2.h>
 #include <nfs/nfsproto.h>
@@ -21,6 +24,8 @@
 #	ifndef MNT_NODEV
 #		define MNT_NODEV 0
 #	endif
+#elif defined(__DragonFly__)
+#	include <vfs/nfs/nfs.h>
 #else
 #	include <nfs/nfs.h>
 #endif
