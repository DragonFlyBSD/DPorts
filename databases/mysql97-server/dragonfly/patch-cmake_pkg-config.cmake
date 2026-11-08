--- cmake/pkg-config.cmake.orig
+++ cmake/pkg-config.cmake
@@ -22,7 +22,7 @@
 # Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301  USA
 
 MACRO(MYSQL_CHECK_PKGCONFIG)
-  IF(LINUX OR FREEBSD)
+  IF(LINUX OR FREEBSD OR CMAKE_SYSTEM_NAME MATCHES "DragonFly")
     # Do a sanity check, before bailing out in FIND_PACKAGE below.
     FIND_PROGRAM(MY_PKG_CONFIG_EXECUTABLE NAMES pkg-config
       DOC "pkg-config executable")
