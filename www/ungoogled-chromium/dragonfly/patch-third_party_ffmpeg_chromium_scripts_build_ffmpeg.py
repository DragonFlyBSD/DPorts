diff --git third_party/ffmpeg/chromium/scripts/build_ffmpeg.py third_party/ffmpeg/chromium/scripts/build_ffmpeg.py
index 81762ff2325..a41f5609157 100755
--- third_party/ffmpeg/chromium/scripts/build_ffmpeg.py
+++ third_party/ffmpeg/chromium/scripts/build_ffmpeg.py
@@ -47,6 +47,7 @@ ARCH_MAP = {
     ],
     'openbsd': ['x64', 'arm64', 'ia32'],
     'freebsd': ['x64', 'arm64', 'ia32'],
+    'dragonfly': ['x64'],
     'mac': ['x64', 'arm64'],
     'win': ['ia32', 'x64', 'arm64'],
 }
@@ -58,6 +59,7 @@ Valid combinations are android     [%(android)s]
                        mac         [%(mac)s]
                        openbsd     [%(openbsd)s]
                        freebsd     [%(freebsd)s]
+                       freebsd     [%(dragonfly)s]
                        win         [%(win)s]
 
 If no target architecture is specified all will be built.
@@ -134,6 +136,8 @@ def DetermineHostOsAndArch():
     host_os = 'openbsd'
   elif platform.system() == 'FreeBSD':
     host_os = 'freebsd'
+  elif platform.system() == 'DragonFly':
+    host_os = 'dragonfly'
   elif platform.system() == 'Darwin':
     host_os = 'mac'
   elif platform.system() == 'Windows' or 'CYGWIN_NT' in platform.system():
@@ -503,7 +507,7 @@ def BuildFFmpeg(target_os, target_arch, host_os, host_arch, parallel_jobs,
   # removing <sys/sysctl.h> soon, so this is needed to silence a deprecation
   # #warning which will be converted to an error via -Werror.
   # There is also no prctl.h
-  if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd']:
+  if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd', 'dragonfly']:
     pre_make_rewrites += [
         (r'(#define HAVE_SYSCTL [01])',
          r'#define HAVE_SYSCTL 0 /* \1 -- forced to 0 for Fuchsia */'),
@@ -630,7 +634,7 @@ def main(argv):
   configure_args = args[2:]
 
 
-  if target_os not in ('android', 'linux', 'linux-noasm', 'mac', 'win', 'all', 'openbsd', 'freebsd'):
+  if target_os not in ('android', 'linux', 'linux-noasm', 'mac', 'win', 'all', 'openbsd', 'freebsd', 'dragonfly'):
     parser.print_help()
     return 1
 
@@ -752,7 +756,7 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch, parallel_jobs,
         '--enable-parser=vp3,vp8',
     ])
 
-  if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd'):
+  if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd','dragonfly'):
     if target_arch == 'x64':
       if target_os == 'android':
         configure_flags['Common'].extend([
@@ -853,7 +857,7 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch, parallel_jobs,
               '--extra-cflags=-mfpu=vfpv3-d16',
           ])
     elif target_arch == 'arm64':
-      if target_os != 'android' and target_os != 'openbsd' and target_os != 'freebsd':
+      if target_os != 'android' and target_os != 'openbsd' and target_os != 'freebsd' and target_os != 'dragonfly':
         if host_arch != 'arm64':
           configure_flags['Common'].extend([
             '--enable-cross-compile',
@@ -944,7 +948,7 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch, parallel_jobs,
         '--disable-inline-asm',
     ])
 
-  if 'win' not in target_os and 'android' not in target_os:
+  if 'win' not in target_os and 'android' not in target_os and 'dragonfly' not in target_os:
     configure_flags['Common'].extend([
         '--enable-pic',
         '--cc=clang',
@@ -1069,7 +1073,7 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch, parallel_jobs,
         'Chrome', configure_flags['Common'] + configure_flags['ChromeAndroid'] +
         configure_args)
 
-  if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd']:
+  if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd', 'dragonfly']:
     # ChromeOS enables MPEG4 which requires error resilience :(
     chrome_os_flags = (
         configure_flags['Common'] + configure_flags['Chrome'] +
diff --git third_party/ffmpeg/stdatomic.h third_party/ffmpeg/stdatomic.h
new file mode 100644
index 00000000000..b4845a74e49
