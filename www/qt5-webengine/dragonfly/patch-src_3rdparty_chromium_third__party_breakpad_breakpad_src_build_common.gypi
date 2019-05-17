--- src/3rdparty/chromium/third_party/breakpad/breakpad/src/build/common.gypi.orig	2019-03-07 09:23:57 UTC
+++ src/3rdparty/chromium/third_party/breakpad/breakpad/src/build/common.gypi
@@ -41,7 +41,7 @@
       'variables': {
         # Compute the architecture that we're building on.
         'conditions': [
-          [ 'OS=="linux" or OS=="freebsd" or OS=="openbsd"', {
+          [ 'OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd"', {
             # This handles the Linux platforms we generally deal with. Anything
             # else gets passed through, which probably won't work very well; such
             # hosts should pass an explicit target_arch to gyp.
@@ -310,7 +310,7 @@
       }],  # coverage!=0
     ],  # conditions for 'target_defaults'
     'target_conditions': [
-      [ 'OS=="linux" or OS=="freebsd" or OS=="openbsd"', {
+      [ 'OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd"', {
         'cflags!': [
           '-Wall',
           '-Wextra',
@@ -536,7 +536,7 @@
     },
   },
   'conditions': [
-    ['OS=="linux" or OS=="freebsd" or OS=="openbsd" or OS=="solaris"', {
+    ['OS=="linux" or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="solaris"', {
       'target_defaults': {
         # Enable -Werror by default, but put it in a variable so it can
         # be disabled in ~/.gyp/include.gypi on the valgrind builders.
@@ -549,7 +549,7 @@
           # aliasing issues have been fixed.
           'no_strict_aliasing%': 1,
           'conditions': [['OS=="linux"', {'werror%': '-Werror',}],
-                         ['OS=="freebsd"', {'werror%': '',}],
+                         ['OS=="freebsd"', {'werror%': '',}], ['OS=="freebsd"', {'werror%': '',}],
                          ['OS=="openbsd"', {'werror%': '',}],
           ],
         },
@@ -957,7 +957,7 @@
         },
       },
     }],
-    ['disable_nacl==1 or OS=="freebsd" or OS=="openbsd" or OS=="solaris"', {
+    ['disable_nacl==1 or OS=="freebsd" or OS=="dragonfly" or OS=="openbsd" or OS=="solaris"', {
       'target_defaults': {
         'defines': [
           'DISABLE_NACL',
