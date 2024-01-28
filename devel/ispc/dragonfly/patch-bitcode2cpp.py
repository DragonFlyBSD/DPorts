--- bitcode2cpp.py.orig	2024-01-28 18:35:31 UTC
+++ bitcode2cpp.py
@@ -11,7 +11,7 @@ parser = argparse.ArgumentParser()
 parser.add_argument("src", help="Source file to process")
 parser.add_argument("--type", help="Type of processed file", choices=['dispatch', 'builtins-c', 'ispc-target'], required=True)
 parser.add_argument("--runtime", help="Runtime", choices=['32', '64'], nargs='?', default='')
-parser.add_argument("--os", help="Target OS", choices=['windows', 'linux', 'macos', 'freebsd', 'android', 'ios', 'ps4', 'web', 'WINDOWS', 'UNIX', 'WEB'], default='')
+parser.add_argument("--os", help="Target OS", choices=['windows', 'linux', 'macos', 'freebsd', 'dragonfly', 'android', 'ios', 'ps4', 'web', 'WINDOWS', 'UNIX', 'WEB'], default='')
 parser.add_argument("--arch", help="Target architecture", choices=['i686', 'x86_64', 'armv7', 'arm64', 'aarch64', 'wasm32', 'wasm64', 'xe64'], default='')
 parser.add_argument("--llvm_as", help="Path to LLVM assembler executable", dest="path_to_llvm_as")
 parser.add_argument("--opaque_flags", help="Flags to enable/disable opaque pointers", default='')
@@ -62,7 +62,7 @@ elif args[0].os == "WEB":
     target_os_old = "web"
     target_os = "web"
 # Exact OS names for builtins.c
-elif args[0].os in ["windows", "linux", "macos", "freebsd", "android", "ios", "ps4", "web"]:
+elif args[0].os in ["windows", "linux", "macos", "freebsd", "dragonfly", "android", "ios", "ps4", "web"]:
     target_os_old = args[0].os
     target_os = args[0].os
 else:
