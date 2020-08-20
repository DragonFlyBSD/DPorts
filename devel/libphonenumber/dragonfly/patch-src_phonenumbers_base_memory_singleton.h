--- src/phonenumbers/base/memory/singleton.h.intermediate	2020-08-19 19:58:44.000000000 +0000
+++ src/phonenumbers/base/memory/singleton.h
@@ -22,7 +22,7 @@
 #elif (__cplusplus >= 201103L) && defined(I18N_PHONENUMBERS_USE_STDMUTEX)
 // C++11 Lock implementation based on std::mutex.
 #include "phonenumbers/base/memory/singleton_stdmutex.h"
-#elif defined(__linux__) || defined(__APPLE__) || defined(I18N_PHONENUMBERS_HAVE_POSIX_THREAD) || defined(__FreeBSD__)
+#elif defined(__linux__) || defined(__APPLE__) || defined(I18N_PHONENUMBERS_HAVE_POSIX_THREAD) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include "phonenumbers/base/memory/singleton_posix.h"
 #elif defined(WIN32)
 #include "phonenumbers/base/memory/singleton_win32.h"
