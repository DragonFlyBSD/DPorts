--- setup.py.orig	2026-09-13 03:40:00 UTC
+++ setup.py
@@ -196,10 +196,14 @@ if EXTRA_ENV_COMPILE_ARGS is None:
          # workaround gcc misalignment bug with MOVAPS (internal b/329134877)
          EXTRA_ENV_COMPILE_ARGS += " -O1"
-    elif "darwin" in sys.platform or "freebsd" in sys.platform:
-        # AppleClang by defaults uses C17 so only C++17 needs to be specified.
+    elif "darwin" in sys.platform or "freebsd" in sys.platform or "dragonfly" in sys.platform:
+        # Use libc++-style flags only on macOS; gcc on FreeBSD/DragonFly
+        # rejects -stdlib=libc++.
         EXTRA_ENV_COMPILE_ARGS += " -std=c++17"
         EXTRA_ENV_COMPILE_ARGS += " -fno-wrapv -frtti"
-        EXTRA_ENV_COMPILE_ARGS += " -stdlib=libc++ -DHAVE_UNISTD_H"
+        if "darwin" in sys.platform:
+            EXTRA_ENV_COMPILE_ARGS += " -stdlib=libc++ -DHAVE_UNISTD_H"
+        else:
+            EXTRA_ENV_COMPILE_ARGS += " -DHAVE_UNISTD_H"
 if EXTRA_ENV_LINK_ARGS is None:
     EXTRA_ENV_LINK_ARGS = ""
     # This is needed for protobuf/main.cc
@@ -229,7 +233,7 @@ if EXTRA_ENV_LINK_ARGS is None:
         EXTRA_ENV_LINK_ARGS += " -Wl,-exported_symbol,_{}".format(
             _EXT_INIT_SYMBOL
         )
-    if "linux" in sys.platform or "darwin" in sys.platform or "freebsd" in sys.platform:
+    if "linux" in sys.platform or "darwin" in sys.platform or "freebsd" in sys.platform or "dragonfly" in sys.platform:
         EXTRA_ENV_LINK_ARGS += " -lpthread"
         if check_linker_need_libatomic():
             EXTRA_ENV_LINK_ARGS += " -latomic"
@@ -269,7 +273,7 @@ if "win32" in sys.platform:
     )
     if "64bit" in platform.architecture()[0]:
         DEFINE_MACROS += (("MS_WIN64", 1),)
-elif "linux" in sys.platform or "darwin" in sys.platform or "freebsd" in sys.platform:
+elif "linux" in sys.platform or "darwin" in sys.platform or "freebsd" in sys.platform or "dragonfly" in sys.platform:
     DEFINE_MACROS += (("HAVE_PTHREAD", 1),)
 
 
