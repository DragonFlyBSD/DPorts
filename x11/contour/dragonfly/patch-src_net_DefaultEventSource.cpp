--- src/net/DefaultEventSource.cpp.orig
+++ src/net/DefaultEventSource.cpp
@@ -7,7 +7,7 @@
 
 #ifdef __linux__
     #include <net/EpollEventSource.hpp>
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__APPLE__) || (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
     #include <net/KqueueEventSource.hpp>
 #endif
 
@@ -18,7 +18,7 @@
 {
 #ifdef __linux__
     return EventSourceKind::Epoll;
-#elif defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#elif defined(__APPLE__) || (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
     return EventSourceKind::Kqueue;
 #else
     return EventSourceKind::Poll;
@@ -43,7 +43,7 @@
         }
 
         case EventSourceKind::Kqueue: {
-#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__OpenBSD__) || defined(__NetBSD__)
+#if defined(__APPLE__) || (defined(__FreeBSD__) || defined(__DragonFly__)) || defined(__OpenBSD__) || defined(__NetBSD__)
             auto source = std::make_unique<KqueueEventSource>();
             return source->good() ? std::unique_ptr<EventSource> { std::move(source) } : nullptr;
 #else
