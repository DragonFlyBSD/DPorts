--- xpcom/reflect/xptcall/xptcprivate.h.orig	2017-11-23 08:28:13 UTC
+++ xpcom/reflect/xptcall/xptcprivate.h
@@ -14,7 +14,7 @@
 
 class xptiInterfaceEntry;
 
-#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__))
+#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__) &&!defined(__DragonFly__))
 #define STUB_ENTRY(n) NS_IMETHOD Stub##n() = 0;
 #else
 #define STUB_ENTRY(n) NS_IMETHOD Stub##n(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t) = 0;
@@ -31,7 +31,7 @@ public:
 #undef STUB_ENTRY
 #undef SENTINEL_ENTRY
 
-#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__))
+#if !defined(__ia64) || (!defined(__hpux) && !defined(__linux__) && !defined(__FreeBSD__) && !defined(__DragonFly__))
 #define STUB_ENTRY(n) NS_IMETHOD Stub##n() override;
 #else
 #define STUB_ENTRY(n) NS_IMETHOD Stub##n(uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t,uint64_t) override;
