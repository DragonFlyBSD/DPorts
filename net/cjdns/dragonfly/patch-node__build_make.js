--- node_build/make.js.orig	2025-12-10 17:30:44 UTC
+++ node_build/make.js
@@ -116,6 +116,7 @@
     }
 
     if (process.env['NO_PIE'] === undefined && builder.config.systemName !== 'freebsd'
+        && builder.config.systemName !== 'dragonfly'
         && builder.config.systemName !== 'win32') {
         builder.config.cflags.push('-fPIE');
 
@@ -283,7 +284,7 @@
             builder.config.libs.push('-lrt'); // clock_gettime()
         } else if (builder.config.systemName === 'darwin') {
             builder.config.libs.push('-framework', 'CoreServices');
-        } else if (['freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0) {
+        } else if (['dragonfly', 'freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0) {
             builder.config.cflags.push('-Wno-overlength-strings');
             builder.config.libs.push('-lkvm');
         } else if (builder.config.systemName === 'sunos') {
