--- src/phonenumbers/base/synchronization/lock.h.intermediate	2020-01-26 19:58:44.000000000 +0000
+++ src/phonenumbers/base/synchronization/lock.h
@@ -63,7 +63,7 @@ private:
 // Dummy lock implementation on non-POSIX platforms. If you are running on a
 // different platform and care about thread-safety, please compile with
 // -DI18N_PHONENUMBERS_USE_BOOST.
-#elif !defined(__linux__) && !defined(__APPLE__) && !defined(__FreeBSD__)
+#elif !defined(__linux__) && !defined(__APPLE__) && !defined(__FreeBSD__) && !defined(__DragonFly__)
 
 namespace i18n {
 namespace phonenumbers {
