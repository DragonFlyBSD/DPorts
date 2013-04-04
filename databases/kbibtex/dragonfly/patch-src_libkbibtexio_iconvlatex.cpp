--- src/libkbibtexio/iconvlatex.cpp.intermediate	2013-04-04 00:21:05.446944000 +0000
+++ src/libkbibtexio/iconvlatex.cpp
@@ -58,7 +58,7 @@ IConvLaTeX::~IConvLaTeX()
 QByteArray IConvLaTeX::encode(const QString &input)
 {
     QByteArray inputByteArray = input.toUtf8();
-#ifndef Q_OS_LINUX
+#if !defined(Q_OS_LINUX) && !defined(__DragonFly__)
     /// iconv on Windows likes to have it as const char *
     const char *inputBuffer = inputByteArray.data();
 #else
