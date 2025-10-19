--- sal/osl/unx/uunxapi.cxx.orig	Fri Mar 21 15:34:31 2025
+++ sal/osl/unx/uunxapi.cxx	Fri Oct
@@ -615,19 +615,22 @@ std::string UnixErrnoString(int nErrno)
 #pragma clang diagnostic ignored "-Wdeprecated-pragma"
 #endif
 #endif
-        case ENOSTR:
+#ifdef ENOSTR
+    case ENOSTR:
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
 #pragma clang diagnostic push
 #endif
 #endif
             return "ENOSTR";
+#endif
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wdeprecated-pragma"
 #endif
 #endif
+#ifdef ENODATA
         case ENODATA:
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
@@ -635,12 +638,15 @@ std::string UnixErrnoString(int nErrno)
 #endif
 #endif
             return "ENODATA";
+#endif
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wdeprecated-pragma"
 #endif
 #endif
+#ifdef ETIME
+
         case ETIME:
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
@@ -648,12 +654,14 @@ std::string UnixErrnoString(int nErrno)
 #endif
 #endif
             return "ETIME";
+#endif
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
 #pragma clang diagnostic push
 #pragma clang diagnostic ignored "-Wdeprecated-pragma"
 #endif
 #endif
+#ifdef ENOSTR
         case ENOSR:
 #if defined __clang__
 #if __has_warning("-Wdeprecated-pragma")
@@ -661,6 +669,7 @@ std::string UnixErrnoString(int nErrno)
 #endif
 #endif
             return "ENOSR";
+#endif
 #ifdef ENONET
         case ENONET:
             return "ENONET";
