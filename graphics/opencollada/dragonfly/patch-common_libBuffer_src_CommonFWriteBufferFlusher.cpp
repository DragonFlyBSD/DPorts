--- common/libBuffer/src/CommonFWriteBufferFlusher.cpp.orig	2014-05-27 23:55:46 UTC
+++ common/libBuffer/src/CommonFWriteBufferFlusher.cpp
@@ -89,7 +89,7 @@ namespace Common
 		FilePosType currentPos = ftello64(mStream);
 #elif defined( _WIN32)
 		FilePosType currentPos = _ftelli64(mStream);
-#elif defined (__APPLE__) || defined(__FreeBSD__)
+#elif defined (__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 		FilePosType currentPos = ftello(mStream);
 #else
 		FilePosType currentPos = ftello64(mStream);
@@ -114,7 +114,7 @@ namespace Common
   			return (fseeko64(mStream,0,SEEK_END) == 0);
 #elif defined( _WIN32)
 			return (_fseeki64(mStream, 0, SEEK_END) == 0);
-#elif defined (__APPLE__) || defined(__FreeBSD__)
+#elif defined (__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 			return (fseeko(mStream, 0, SEEK_END) == 0);
 #else
 			return (fseeko64(mStream, 0, SEEK_END) == 0);
@@ -134,7 +134,7 @@ namespace Common
   				bool success = (fseeko64(mStream,pos,SEEK_SET) == 0);
 #elif defined( _WIN32)
 				bool success = (_fseeki64(mStream, pos, SEEK_SET) == 0);
-#elif defined (__APPLE__) || defined(__FreeBSD__)
+#elif defined (__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 				bool success = (fseeko(mStream, pos, SEEK_SET) == 0);
 #else
 				bool success = (fseeko64(mStream, pos, SEEK_SET) == 0);
