HhrrrrrR who made process.platform to return freebsd?????

--- node_build/make.js.orig	2016-06-15 00:58:54.000000000 +0300
+++ node_build/make.js
@@ -113,6 +119,7 @@ Builder.configure({
     }
 
     if (process.env['NO_PIE'] === undefined && builder.config.systemName !== 'freebsd'
+        && builder.config.systemName !== 'dragonfly'
         && builder.config.systemName !== 'win32')
     {
         builder.config.cflags.push('-fPIE');
@@ -303,7 +310,7 @@ Builder.configure({
             builder.config.libs.push('-lrt'); // clock_gettime()
         } else if (builder.config.systemName === 'darwin') {
             builder.config.libs.push('-framework', 'CoreServices');
-        } else if (['freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0) {
+        } else if (['dragonfly', 'freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0) {
             builder.config.cflags.push('-Wno-overlength-strings');
             builder.config.libs.push('-lkvm');
         } else if (builder.config.systemName === 'sunos') {
@@ -361,7 +368,7 @@ Builder.configure({
                 args.push.apply(args, env.GYP_ADDITIONAL_ARGS.split(' '));
             }
 
-            if (['freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) !== -1) {
+            if (['dragonfly', 'freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) !== -1) {
                 // This platform lacks a functioning sem_open implementation, therefore...
                 args.push('--no-parallel');
                 args.push('-DOS=' + builder.config.systemName);
@@ -387,7 +394,7 @@ Builder.configure({
                 }
                 args.push('CFLAGS=' + cflags.join(' '));
 
-                var makeCommand = ['freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0 ? 'gmake' : 'make';
+                var makeCommand = ['dragonfly', 'freebsd', 'openbsd', 'netbsd'].indexOf(builder.config.systemName) >= 0 ? 'gmake' : 'make';
                 var make = Spawn(makeCommand, args, {stdio: 'inherit'});
 
                 make.on('error', function (err) {
