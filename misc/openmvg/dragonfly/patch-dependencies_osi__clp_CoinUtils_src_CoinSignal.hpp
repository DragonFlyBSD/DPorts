--- dependencies/osi_clp/CoinUtils/src/CoinSignal.hpp.orig	2017-02-20 05:44:00 UTC
+++ dependencies/osi_clp/CoinUtils/src/CoinSignal.hpp
@@ -43,7 +43,7 @@
 
 //-----------------------------------------------------------------------------
 
-#if defined(__FreeBSD__) && defined(__GNUC__)
+#if (defined(__DragonFly__) || defined(__FreeBSD__)) && defined(__GNUC__)
    typedef __decltype(SIG_DFL) CoinSighandler_t;
 #  define CoinSighandler_t_defined
 #endif
