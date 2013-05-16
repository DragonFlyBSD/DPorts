--- tools.c.intermediate	2013-05-16 18:18:59.990701000 +0000
+++ tools.c
@@ -871,7 +871,7 @@ void cCharSetConv::SetSystemCharacterTab
 const char *cCharSetConv::Convert(const char *From, char *To, size_t ToLength)
 {
   if (cd != (iconv_t)-1 && From && *From) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) && !defined(__DragonFly__)
      const char *FromPtr = (char *)From;
 #else
      char *FromPtr = (char *)From;
