--- sentinel.c.orig
+++ sentinel.c
@@ -2544,7 +2544,7 @@
 #if defined(SOLARIS)
 			    gethostbyname_r(p, &h, message->buf, MAX_STRING_SIZE, &h_errno);
 #else
-#ifdef __linux__
+#if defined(__linux__) || defined(__DragonFly__)
 			    ph = &h;
 			    gethostbyname_r(p, &h, message->buf, MAX_STRING_SIZE, &ph, &h_errno);
 #else
@@ -2625,7 +2625,7 @@
 #if defined(SOLARIS)
 			    ph = gethostbyname_r(p, &h, message->buf, MAX_STRING_SIZE, &h_errno);
 #else
-#ifdef __linux__
+#if defined(__linux__) || defined(__DragonFly__)
 			    ph = &h;
 			    gethostbyname_r(p, &h, message->buf, MAX_STRING_SIZE, &ph, &h_errno);
 #else
