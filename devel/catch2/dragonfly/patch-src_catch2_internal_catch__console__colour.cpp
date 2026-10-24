--- src/catch2/internal/catch_console_colour.cpp.orig
+++ src/catch2/internal/catch_console_colour.cpp
@@ -164,10 +164,11 @@
 #if defined( CATCH_PLATFORM_LINUX ) \
  || defined( CATCH_PLATFORM_MAC ) \
  || defined( __GLIBC__ ) \
  || (defined( __FreeBSD__ ) \
      /* PlayStation platform does not have `isatty()` */ \
      && !defined(CATCH_PLATFORM_PLAYSTATION)) \
+ || defined( __DragonFly__ ) \
  || defined( CATCH_PLATFORM_QNX )
 #    define CATCH_INTERNAL_HAS_ISATTY
 #    include <unistd.h>
