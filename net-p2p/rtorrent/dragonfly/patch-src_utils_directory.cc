--- src/utils/directory.cc.orig
+++ src/utils/directory.cc
@@ -70,7 +70,11 @@
     itr->s_type   = DT_UNKNOWN;
 #else
     itr->s_fileno = entry->d_fileno;
+#ifdef __DragonFly__
+    itr->s_reclen = _DIRENT_DIRSIZ(entry);
+#else
     itr->s_reclen = entry->d_reclen;
+#endif
     itr->s_type   = entry->d_type;
 #endif
 
