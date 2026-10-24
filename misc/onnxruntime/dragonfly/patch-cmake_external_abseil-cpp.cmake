--- cmake/external/abseil-cpp.cmake.orig	2026-09-10 06:09:41 UTC
+++ cmake/external/abseil-cpp.cmake
@@ -24,7 +24,8 @@
                            ${Patch_EXECUTABLE} --binary --ignore-whitespace -p1 < ${PROJECT_SOURCE_DIR}/vcpkg-ports/abseil/absl_msvc_unreachable_code.patch)
   else()
     set(ABSL_PATCH_COMMAND ${Patch_EXECUTABLE} --binary --ignore-whitespace -p1 < ${PROJECT_SOURCE_DIR}/vcpkg-ports/abseil/absl_cuda_warnings.patch &&
-                           ${Patch_EXECUTABLE} --binary --ignore-whitespace -p1 < ${PROJECT_SOURCE_DIR}/vcpkg-ports/abseil/absl_cuda13_member_template.patch)
+                           ${Patch_EXECUTABLE} --binary --ignore-whitespace -p1 < ${PROJECT_SOURCE_DIR}/vcpkg-ports/abseil/absl_cuda13_member_template.patch &&
+                           ${Patch_EXECUTABLE} --binary --ignore-whitespace -p1 < ${PROJECT_SOURCE_DIR}/vcpkg-ports/abseil/absl_dragonfly.patch)
   endif()
 else()
   set(ABSL_PATCH_COMMAND "")
