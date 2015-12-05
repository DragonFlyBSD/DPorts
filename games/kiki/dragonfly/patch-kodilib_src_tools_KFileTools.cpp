
Taken-from: devel/opencvs/dragonfly/patch-file.c

--- kodilib/src/tools/KFileTools.cpp.bak	2015-12-05 13:21:42.000000000 +0200
+++ kodilib/src/tools/KFileTools.cpp
@@ -334,7 +334,11 @@ bool kFileGetDirEntries ( const string &
             {
                 entries.push_back(filename);
             }
+#if defined(__DragonFly__)
+            pos = (char *)_DIRENT_NEXT(entryPtr); 
+#else
             pos += entryPtr->d_reclen;
+#endif
         }
     }
     
