--- libsi/si.c.intermediate	2013-05-16 18:19:00.080695000 +0000
+++ libsi/si.c
@@ -411,7 +411,7 @@ bool convertCharacterTable(const char *f
   if (SystemCharacterTable) {
      iconv_t cd = iconv_open(SystemCharacterTable, fromCode);
      if (cd != (iconv_t)-1) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
         const char *fromPtr = from;
 #else
         char *fromPtr = (char *)from;
