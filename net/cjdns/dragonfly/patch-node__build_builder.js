--- node_build/builder.js.orig	2020-10-05 21:46:19 UTC
+++ node_build/builder.js
@@ -767,8 +767,10 @@ module.exports.configure = function (
         gcc = params.gcc;
     } else if (systemName === 'openbsd') {
         gcc = 'egcc';
+    } else if (systemName === 'dragonfly') {
+        gcc = 'gcc';
     } else if (systemName === 'freebsd') {
-        gcc = 'clang';
+        gcc = 'gcc';
     } else {
         gcc = 'gcc';
     }
