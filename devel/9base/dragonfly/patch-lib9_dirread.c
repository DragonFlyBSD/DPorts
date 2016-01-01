--- lib9/dirread.c.orig	2010-06-04 13:46:05.000000000 +0300
+++ lib9/dirread.c
@@ -18,7 +18,7 @@ mygetdents(int fd, struct dirent *buf, i
 	nn = getdirentries(fd, (void*)buf, n, &off);
 	return nn;
 }
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__)
+#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__DragonFly__)
 static int
 mygetdents(int fd, struct dirent *buf, int n)
 {
@@ -50,14 +50,22 @@ countde(char *p, int n)
 	m = 0;
 	while(p < e){
 		de = (struct dirent*)p;
+#ifdef __DragonFly__
+		if(_DIRENT_RECLEN(de->d_namlen) <= 4+2+2+1 || p+_DIRENT_RECLEN(de->d_namlen) > e)
+#else
 		if(de->d_reclen <= 4+2+2+1 || p+de->d_reclen > e)
+#endif
 			break;
 		if(de->d_name[0]=='.' && de->d_name[1]==0)
 			de->d_name[0] = 0;
 		else if(de->d_name[0]=='.' && de->d_name[1]=='.' && de->d_name[2]==0)
 			de->d_name[0] = 0;
 		m++;
+#ifdef __DragonFly__
+		p += _DIRENT_RECLEN(de->d_namlen);
+#else
 		p += de->d_reclen;
+#endif
 	}
 	return m;
 }
@@ -97,7 +105,11 @@ dirpackage(int fd, char *buf, int n, Dir
 				stat(de->d_name, &st);
 			nstr += _p9dir(&lst, &st, de->d_name, nil, nil, nil);
 		}
+#ifdef __DragonFly__
+		p += _DIRENT_RECLEN(de->d_namlen);
+#else
 		p += de->d_reclen;
+#endif
 	}
 
 	d = malloc(sizeof(Dir)*n+nstr);
@@ -119,7 +131,11 @@ dirpackage(int fd, char *buf, int n, Dir
 				stat(de->d_name, &st);
 			_p9dir(&lst, &st, de->d_name, &d[m++], &str, estr);
 		}
+#ifdef __DragonFly__
+		p += _DIRENT_RECLEN(de->d_namlen);
+#else
 		p += de->d_reclen;
+#endif
 	}
 
 	fchdir(oldwd);
