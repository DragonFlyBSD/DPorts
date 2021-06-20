--- cmake/libusrsctp.cmake.orig	2021-02-03 11:42:41 UTC
+++ cmake/libusrsctp.cmake
@@ -25,6 +25,16 @@ elseif (APPLE)
     PRIVATE
         -U__APPLE__
     )
+elseif (CMAKE_SYSTEM_NAME MATCHES "FreeBSD|DragonFly")
+    target_compile_definitions(libusrsctp
+    PRIVATE
+        __Userspace_os_DragonFly
+	HAVE_SYS_QUEUE_H
+    )
+    target_compile_options(libusrsctp
+    PRIVATE
+        -U__DragonFly__
+    )
 else()
     target_compile_definitions(libusrsctp
     PRIVATE
