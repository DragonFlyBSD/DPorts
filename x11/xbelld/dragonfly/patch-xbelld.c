--- xbelld.c.intermediate	2013-03-19 23:53:50.443960000 +0000
+++ xbelld.c
@@ -914,7 +914,7 @@ _rescan(void)
     close(dfd);
     for (nent = 0, dep = (struct dirent *)dbuf;
 	    (char *)dep - dbuf < nb;
-	    ++nent, dep+= dep->d_reclen)
+	    ++nent, dep+= _DIRENT_RECLEN(dep->d_namlen))
 	;
     _hash_resize(&(_bd.bd_sndhash), nent * 2);
     if (_bd.bd_defsnd)
@@ -924,7 +924,7 @@ _rescan(void)
     }
     for (dep = (struct dirent *)dbuf;
 	    (char *)dep - dbuf < nb;
-	    dep+= dep->d_reclen)
+	    dep+= _DIRENT_RECLEN(dep->d_namlen))
     {
 	char		    *suf;
 	static const char   *sufs[] = AUDIO_SUFS;
