--- src/encoder/encodermp3.cpp.intermediate	2019-05-26 12:22:51.000000000 +0000
+++ src/encoder/encodermp3.cpp
@@ -95,7 +95,7 @@ EncoderMp3::EncoderMp3(EncoderCallback*
      */
     QStringList libnames;
     QString libname = "";
-#if defined(__LINUX__) || defined(__FreeBSD__)
+#if defined(__LINUX__) || defined(__FreeBSD__) || defined(__DragonFly__)
     libnames << "mp3lame";
 #elif __WINDOWS__
     libnames << "lame_enc.dll";
