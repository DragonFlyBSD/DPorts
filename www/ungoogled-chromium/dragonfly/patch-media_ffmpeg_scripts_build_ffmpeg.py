diff --git media/ffmpeg/scripts/build_ffmpeg.py media/ffmpeg/scripts/build_ffmpeg.py
index 0b0798ab5c18..eba0b2ab619e 100755
--- media/ffmpeg/scripts/build_ffmpeg.py
+++ media/ffmpeg/scripts/build_ffmpeg.py
@@ -45,6 +45,7 @@ ARCH_MAP = {
     'linux': ['ia32', 'x64', 'noasm-x64', 'arm', 'arm-neon', 'arm64'],
     'openbsd': ['x64', 'arm64', 'ia32'],
     'freebsd': ['x64', 'arm64', 'ia32'],
+    'dragonfly': ['x64'],
     'mac': ['x64', 'arm64'],
     'win': ['ia32', 'x64', 'arm64'],
 }
@@ -124,7 +125,7 @@ def PrintAndCheckCall(argv, *args, **kwargs):
 
 
 def GetDsoName(target_os, dso_name, dso_version):
-    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd'):
+    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd', 'dragonfly'):
         return 'lib%s.so.%s' % (dso_name, dso_version)
     elif target_os == 'mac':
         return 'lib%s.%s.dylib' % (dso_name, dso_version)
@@ -477,7 +478,7 @@ def BuildFFmpeg(target_os, target_arch, host_os, host_arch, parallel_jobs,
     # removing <sys/sysctl.h> soon, so this is needed to silence a deprecation
     # #warning which will be converted to an error via -Werror.
     # There is also no prctl.h
-    if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd']:
+    if target_os in ['linux', 'linux-noasm', 'openbsd', 'freebsd', 'dragonfly']:
         pre_make_rewrites += [
             (r'(#define HAVE_SYSCTL [01])',
              r'#define HAVE_SYSCTL 0 /* \1 -- forced to 0 for Fuchsia */'),
@@ -600,7 +601,7 @@ def main(argv):
     configure_args = args[2:]
 
     if target_os not in ('android', 'linux', 'linux-noasm', 'mac', 'win',
-                         'all', 'openbsd', 'freebsd'):
+                         'all', 'openbsd', 'freebsd', 'dragonfly'):
         parser.print_help()
         return 1
 
@@ -714,7 +715,7 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch,
             '--optflags="-O2"',
         ])
 
-    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd'):
+    if target_os in ('linux', 'linux-noasm', 'android', 'openbsd', 'freebsd', 'dragonfly'):
         if target_arch == 'x64':
             if target_os == 'android':
                 configure_flags['Common'].extend([
@@ -908,19 +909,26 @@ def ConfigureAndBuild(target_arch, target_os, host_os, host_arch,
             '--disable-inline-asm',
         ])
 
-    if 'win' not in target_os and 'android' not in target_os:
+    if 'win' not in target_os and 'android' not in target_os and 'dragonfly' not in target_os:
         configure_flags['Common'].extend([
             '--enable-pic',
             '--cc=clang',
             '--cxx=clang++',
             '--ld=clang',
         ])
+    else:
+        configure_flags['Common'].extend([
+            '--enable-pic',
+            '--cc=cc',
+            '--cxx=c++',
+            '--ld=cc',
+        ])
 
         # Clang Linux will use the first 'ld' it finds on the path, which will
         # typically be the system one, so explicitly configure use of Clang's
         # ld.lld, to ensure that things like cross-compilation and LTO work.
         # This does not work for ia32 and is always used on mac.
-        if target_arch != 'ia32' and target_os != 'mac':
+        if target_arch != 'ia32' and target_os != 'mac' and target_os != 'dragonfly':
             configure_flags['Common'].append('--extra-ldflags=-fuse-ld=lld')
 
     # Should be run on Mac, unless we're cross-compiling on Linux.
