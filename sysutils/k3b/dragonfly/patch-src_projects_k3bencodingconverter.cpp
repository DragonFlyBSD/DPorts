--- src/projects/k3bencodingconverter.cpp.orig	2008-05-27 08:23:56.000000000 +0000
+++ src/projects/k3bencodingconverter.cpp
@@ -62,7 +62,7 @@ bool K3bEncodingConverter::encodedLocall
 {
 #ifdef HAVE_ICONV_H
   QCString utf8Encoded( s.length()*2 );
-#if defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
+#if !defined(__DragonFly__) && (defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)) && !defined(__DragonFly__)
   const char* in = s.data();
 #else
   char* in = s.data();
@@ -111,7 +111,7 @@ bool K3bEncodingConverter::convert( cons
   iconv_t ic = ::iconv_open( to.local8Bit(), from.local8Bit() );
 
   result.resize( s.length() * 2 );
-#if defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD)
+#if !defined(__DragonFly__) && (defined(Q_OS_FREEBSD) || defined(Q_OS_NETBSD))
   const char* in = s.data();
 #else
   char* in = s.data();
