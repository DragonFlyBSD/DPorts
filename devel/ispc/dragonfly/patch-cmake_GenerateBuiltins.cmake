--- cmake/GenerateBuiltins.cmake.orig	2020-12-19 00:48:42 UTC
+++ cmake/GenerateBuiltins.cmake
@@ -172,6 +172,9 @@ function(builtin_to_cpp bit os_name arch
     elseif (${os_name} STREQUAL "freebsd")
         set(triple ${target_arch}-unknown-freebsd)
         set(fpic -fPIC)
+    elseif (${os_name} STREQUAL "dragonfly")
+        set(triple ${target_arch}-unknown-dragonfly)
+        set(fpic -fPIC)
     elseif (${os_name} STREQUAL "macos")
         set(triple ${target_arch}-apple-macosx)
     elseif (${os_name} STREQUAL "android")
@@ -204,7 +207,7 @@ function(builtin_to_cpp bit os_name arch
         if (${os_name} STREQUAL "ios")
             # -isystem/Applications/Xcode.app/Contents/Developer/Platforms/iPhoneOS.platform/Developer/SDKs/iPhoneOS.sdk/usr/include/
             set(includePath -isystem${ISPC_IOS_SDK_PATH}/usr/include)
-        elseif (${os_name} STREQUAL "linux" OR ${os_name} STREQUAL "android" OR ${os_name} STREQUAL "freebsd")
+        elseif (${os_name} STREQUAL "linux" OR ${os_name} STREQUAL "android" OR ${os_name} STREQUAL "freebsd" OR ${os_name} STREQUAL "dragonfly")
             if (${target_arch} STREQUAL "armv7")
                 # -isystem/Users/Shared/android-ndk-r20/sysroot/usr/include -isystem/Users/Shared/android-ndk-r20/sysroot/usr/include/arm-linux-androideabi
                 set(includePath -isystem${ISPC_ANDROID_NDK_PATH}/sysroot/usr/include -isystem${ISPC_ANDROID_NDK_PATH}/sysroot/usr/include/arm-linux-androideabi)
@@ -364,6 +367,9 @@ function (generate_common_builtins resul
     if (ISPC_FREEBSD_TARGET)
         list (APPEND supported_oses "freebsd")
     endif()
+    if (ISPC_DRAGONFLY_TARGET)
+        list (APPEND supported_oses "dragonfly")
+    endif()
     if (ISPC_MACOS_TARGET)
         list (APPEND supported_oses "macos")
     endif()
@@ -379,7 +385,7 @@ function (generate_common_builtins resul
 
     message (STATUS "ISPC will be built with support of ${supported_oses} for ${supported_archs}")
     foreach (bit 32 64)
-        foreach (os_name "windows" "linux" "freebsd" "macos" "android" "ios" "ps4" "web")
+        foreach (os_name "windows" "linux" "freebsd" "dragonfly" "macos" "android" "ios" "ps4" "web")
             foreach (arch "x86" "arm" "wasm32")
                 builtin_to_cpp(${bit} ${os_name} ${arch} "${supported_archs}" "${supported_oses}" res${bit}${os_name}${arch})
                 list(APPEND tmpList ${res${bit}${os_name}${arch}} )
