--- plib/dirlist.c.orig	2014-10-26 20:22:59 UTC
+++ plib/dirlist.c
@@ -66,7 +66,11 @@
     n_dep = a_malloc(len, "struct dirent");
     memcpy(n_dep, dep, len);
 #else
+# ifdef __DragonFly__
+    n_dep = a_malloc(len = _DIRENT_RECLEN(dep->d_namlen), "struct dirent");
+# else
     n_dep = a_malloc(len = dep->d_reclen, "struct dirent");
+# endif
 #endif
     memcpy(n_dep, dep, len);
     
@@ -94,7 +98,9 @@
 #ifdef		linux
     dp->d_off = 0;
 #endif		/* linux */
+#ifndef		__DragonFly__
     dp->d_reclen = len;
+#endif
     strcpy(dp->d_name, name);
 
     return dp;
