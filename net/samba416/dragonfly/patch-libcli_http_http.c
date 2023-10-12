--- libcli/http/http.c.orig	2022-10-22 09:49:00.963315000 +0200
+++ libcli/http/http.c	2022-10-22 09:50:31.821255000 +0200
@@ -141,7 +141,7 @@
 		return HTTP_ALL_DATA_READ;
 	}
 
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(__DragonFly__)
 	int s0, s1, s2, s3; s0 = s1 = s2 = s3 = 0;
 	n = sscanf(line, "%n%*[^:]%n: %n%*[^\r\n]%n\r\n", &s0, &s1, &s2, &s3);
 
@@ -199,7 +199,7 @@
 		return false;
 	}
 
-#ifdef FREEBSD
+#if defined(FREEBSD) || defined(__DragonFly__)
 	int s0, s1, s2, s3; s0 = s1 = s2 = s3 = 0;
 	n = sscanf(line, "%n%*[^/]%n/%c.%c %d %n%*[^\r\n]%n\r\n",
 		   &s0, &s1, &major, &minor, &code, &s2, &s3);
