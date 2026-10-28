--- scripts/bitcode2cpp.py.orig	2026-10-26 01:17:16 UTC
+++ scripts/bitcode2cpp.py
@@ -47,7 +47,7 @@ parser.add_argument("src", help="Source file to process")
 parser.add_argument("output", help="Output file")
 parser.add_argument("--type", help="Type of processed file", choices=['dispatch', 'builtins-c', 'ispc-target', 'stdlib', 'header'], required=True)
 parser.add_argument("--runtime", help="Runtime", choices=['32', '64'], nargs='?', default='')
-parser.add_argument("--os", help="Target OS", choices=['windows', 'linux', 'macos', 'freebsd', 'android', 'ios', 'ps4', 'web', 'WINDOWS', 'UNIX', 'WEB'], default='')
+parser.add_argument("--os", help="Target OS", choices=['windows', 'linux', 'macos', 'freebsd', 'dragonfly', 'android', 'ios', 'ps4', 'web', 'WINDOWS', 'UNIX', 'WEB'], default='')
 parser.add_argument("--arch", help="Target architecture", choices=ARCH_CHOICES, default='')
 
 args = parser.parse_known_args()
@@ -84,7 +84,7 @@ elif args[0].os == "WEB":
     target_os_old = "web"
     target_os = "web"
 # Exact OS names for builtins.c
-elif args[0].os in ["windows", "linux", "macos", "freebsd", "android", "ios", "ps4", "web"]:
+elif args[0].os in ["windows", "linux", "macos", "freebsd", "dragonfly", "android", "ios", "ps4", "web"]:
     target_os_old = args[0].os
     target_os = args[0].os
 else:
