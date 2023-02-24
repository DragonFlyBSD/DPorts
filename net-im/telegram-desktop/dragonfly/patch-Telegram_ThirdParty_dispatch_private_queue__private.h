--- Telegram/ThirdParty/dispatch/private/queue_private.h.orig	2022-06-06 20:33:13 UTC
+++ Telegram/ThirdParty/dispatch/private/queue_private.h
@@ -199,7 +199,7 @@ dispatch_set_qos_class_fallback(dispatch
 #define DISPATCH_QUEUE_FLAGS_MASK (DISPATCH_QUEUE_OVERCOMMIT)
 
 // On FreeBSD pthread_attr_t is a typedef to a pointer type
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #  define DISPATCH_QUEUE_NULLABLE_PTHREAD_ATTR_PTR _Nullable
 #else
 #  define DISPATCH_QUEUE_NULLABLE_PTHREAD_ATTR_PTR
