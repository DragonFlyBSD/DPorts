--- include/quickcpplib/detail/impl/signal_guard.ipp.orig
+++ include/quickcpplib/detail/impl/signal_guard.ipp
@@ -991,7 +991,7 @@
 #ifdef __linux__
         case SIGIO:
 #endif
-#if defined(__FreeBSD__) || defined(__APPLE__)
+#if defined(__FreeBSD__) || defined(__APPLE__) || defined(__DragonFly__)
         case SIGXCPU:
         case SIGXFSZ:
 #endif
@@ -1666,7 +1666,7 @@
         abort();
 #endif
       }
-#ifdef __APPLE__
+#if defined(__APPLE__) || defined(__DragonFly__)
       (void) ms;
 #ifdef __cpp_exceptions
       throw std::runtime_error("signal_guard_watchdog not implemented on Mac OS due to lack of POSIX timers");
@@ -1767,7 +1767,7 @@
         }
         _threadh = nullptr;
 #else
-#ifndef __APPLE__
+#if !defined(__APPLE__) && !defined(__DragonFly__)
         if(-1 == ::timer_delete(static_cast<timer_t>(_timerid)))
         {
 #ifdef __cpp_exceptions
