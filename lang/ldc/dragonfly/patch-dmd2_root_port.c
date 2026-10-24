--- ../ldc-0.17.3-src/dmd2/root/port.c.orig	2017-02-03 09:17:21 UTC
+++ ../ldc-0.17.3-src/dmd2/root/port.c
@@ -762,7 +762,7 @@ int Port::isNan(double r)
 #else
     return __inline_isnan(r);
 #endif
-#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__ || __DragonFly__
+#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__
     return isnan(r);
 #else
     #undef isnan
@@ -778,7 +778,7 @@ int Port::isNan(longdouble r)
 #else
     return __inline_isnan(r);
 #endif
-#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__ || __DragonFly__
+#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__
     return isnan(r);
 #else
     #undef isnan
@@ -806,7 +806,7 @@ int Port::isInfinity(double r)
 {
 #if __APPLE__
     return fpclassify(r) == FP_INFINITE;
-#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__ ||  __DragonFly__
+#elif __HAIKU__ || __FreeBSD__ || __OpenBSD__ || __NetBSD__
     return isinf(r);
 #else
     #undef isinf
@@ -821,7 +821,7 @@ longdouble Port::sqrt(longdouble x)
 
 longdouble Port::fmodl(longdouble x, longdouble y)
 {
-#if __FreeBSD__ && __FreeBSD_version < 800000 || __OpenBSD__ || __NetBSD__ || __DragonFly__
+#if __FreeBSD__ && __FreeBSD_version < 800000 || __OpenBSD__ || __NetBSD__
     return ::fmod(x, y);        // hack for now, fix later
 #else
     return std::fmod(x, y);
