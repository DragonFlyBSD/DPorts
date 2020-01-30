--- src/phonenumbers/base/memory/singleton.h.orig	2020-01-26 19:58:44.000000000 +0000
+++ src/phonenumbers/base/memory/singleton.h
@@ -56,7 +56,7 @@ template <class T> boost::once_flag Sing
 #include "phonenumbers/base/logging.h"
 #include "phonenumbers/base/thread_checker.h"
 
-#if !defined(__linux__) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#if !defined(__linux__) && !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 namespace i18n {
 namespace phonenumbers {
