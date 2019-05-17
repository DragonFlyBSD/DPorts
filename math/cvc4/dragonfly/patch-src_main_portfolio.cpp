--- src/main/portfolio.cpp.intermediate	2019-05-04 13:41:43 UTC
+++ src/main/portfolio.cpp
@@ -18,7 +18,7 @@
 #include <boost/bind.hpp>
 #include <boost/thread/condition.hpp>
 #include <boost/exception_ptr.hpp>
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <pthread_np.h>
 #endif
 
@@ -105,7 +105,7 @@ std::pair<int, S> runPortfolio(int numTh
       pthread_attr_t attr;
 #ifdef __linux__
       pthread_getattr_np(threads[t].native_handle(), &attr);
-#elif __FreeBSD__
+#elif __FreeBSD__ || __DragonFly__
       pthread_attr_get_np(threads[t].native_handle(), &attr);
 #endif
       pthread_attr_getstack(&attr, &stackaddr, &stacksize);
