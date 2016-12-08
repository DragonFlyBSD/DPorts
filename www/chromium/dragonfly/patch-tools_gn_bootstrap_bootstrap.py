--- tools/gn/bootstrap/bootstrap.py.intermediate	2016-11-29 15:48:26.000000000 +0200
+++ tools/gn/bootstrap/bootstrap.py
@@ -32,7 +32,7 @@ SRC_ROOT = os.path.dirname(os.path.dirna
 
 is_win = sys.platform.startswith('win')
 is_linux = sys.platform.startswith('linux')
-is_bsd = platform.system().lower().endswith('bsd')
+is_bsd = platform.system().lower().endswith('bsd') or platform.system().lower().startswith('dragonfly')
 is_mac = sys.platform.startswith('darwin')
 is_posix = is_linux or is_mac or is_bsd
 
@@ -316,7 +316,7 @@ def write_gn_ninja(path, root_gen_dir, o
         '-pipe',
         '-fno-exceptions'
     ])
-    cflags_cc.extend(['-std=c++11', '-Wno-c++11-narrowing'])
+    cflags_cc.extend(['-std=c++11', '-Wno-narrowing'])
   elif is_win:
     if not options.debug:
       cflags.extend(['/Ox', '/DNDEBUG', '/GL'])
@@ -607,8 +607,8 @@ def write_gn_ninja(path, root_gen_dir, o
         'tool': 'cxx',
     }
     static_libraries['base']['sources'].extend([
-        'base/allocator/allocator_shim.cc',
-        'base/allocator/allocator_shim_default_dispatch_to_glibc.cc',
+        #'base/allocator/allocator_shim.cc',
+        #'base/allocator/allocator_shim_default_dispatch_to_glibc.cc',
         'base/memory/shared_memory_posix.cc',
         'base/nix/xdg_util.cc',
         #'base/process/internal_linux.cc',
@@ -622,13 +622,16 @@ def write_gn_ninja(path, root_gen_dir, o
         # 'base/trace_event/malloc_dump_provider.cc',
     ])
     static_libraries['libevent']['include_dirs'].extend([
-        os.path.join(SRC_ROOT, 'base', 'third_party', 'libevent', 'freebsd')
+        os.path.join(SRC_ROOT, 'base', 'third_party', 'libevent', 'dragonfly')
     ])
     static_libraries['libevent']['sources'].extend([
         'base/third_party/libevent/kqueue.c',
     ])
     # Suppressing warnings
-    cflags.extend(['-Wno-deprecated-register', '-Wno-parentheses-equality'])
+    if platform.system().lower().startswith('free'):
+      cflags.extend(['-Wno-deprecated-register', '-Wno-parentheses-equality'])
+    if platform.system().lower().startswith('dragonfly'):
+      cflags.extend(['-D__FreeBSD__=9', '-isystem /usr/local/include'])
 
   if is_mac:
     static_libraries['base']['sources'].extend([
