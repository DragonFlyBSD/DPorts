--- src/osdep_bsd.c.orig	2013-09-12 21:43:54.000000000 +0000
+++ src/osdep_bsd.c
@@ -86,7 +86,7 @@ Bool GetCommandForPid(int pid, char ***a
 		mib[0] = CTL_KERN;
 		mib[1] = KERN_ARGMAX;
 		mib[2] = 0;
-		mib[4] = 0;
+		mib[3] = 0;
 
 		count = sizeof(argmax);
 		if (sysctl(mib, 2, &argmax, &count, NULL, 0) == -1)
