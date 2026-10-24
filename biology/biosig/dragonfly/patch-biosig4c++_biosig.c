--- biosig4c++/biosig.c.orig	2026-10-23 00:00:00 UTC
+++ biosig4c++/biosig.c
@@ -632,7 +632,7 @@
 	// gnu linux on sparc needs this
 	fpos_t p;
 	p.__pos = *pos;
-#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__
+#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__ || __DragonFly__
 	fpos_t p = *pos;
 #else
 	fpos_t p;
@@ -653,7 +653,7 @@
 #if __gnu_linux__
 	// gnu linux on sparc needs this
 	*pos = p.__pos;
-#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__
+#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__ || __DragonFly__
 	*pos = p;
 #else
 	*pos = p.__pos;
@@ -679,7 +679,7 @@
 #if __gnu_linux__
 		// gnu linux on sparc needs this
 		*pos = p.__pos;	// ugly hack but working
-#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__
+#elif __sparc__ || __APPLE__ || __MINGW32__ || ANDROID || __NetBSD__ || __CYGWIN__ || __FreeBSD__ || __DragonFly__
 		*pos = p;
 #else
 		*pos = p.__pos;	// ugly hack but working
@@ -1220,7 +1220,7 @@
 	hdr->data.size[0] = 0; 	// rows
 	hdr->data.size[1] = 0;  // columns
 	hdr->data.block = NULL;
-#if __FreeBSD__ || __APPLE__ || __NetBSD__
+#if __FreeBSD__ || __APPLE__ || __NetBSD__ || __DragonFly__
 	time_t t=time(NULL);
 	struct tm *tt = localtime(&t);
 	hdr->tzmin    = tt->tm_gmtoff/60;
