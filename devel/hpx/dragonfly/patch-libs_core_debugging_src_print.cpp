--- libs/core/debugging/src/print.cpp.orig
+++ libs/core/debugging/src/print.cpp
@@ -261,7 +261,7 @@
             if (!initialized)
             {
                 initialized = true;
-#if !defined(__FreeBSD__)
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
                 gethostname(hostname_, static_cast<std::size_t>(12));
 #endif
                 int const rank = guess_rank();
