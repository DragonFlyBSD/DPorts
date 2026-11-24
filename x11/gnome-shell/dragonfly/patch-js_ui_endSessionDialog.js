--- js/ui/endSessionDialog.js.orig
+++ js/ui/endSessionDialog.js
@@ -610,31 +610,28 @@
     }
 
     async _loadSessions() {
-        let sessionId = GLib.getenv('XDG_SESSION_ID');
-        if (!sessionId) {
-            const currentSessionProxy = await this._loginManager.getCurrentSessionProxy();
-            sessionId = currentSessionProxy.Id;
-            log(`endSessionDialog: No XDG_SESSION_ID, fetched from logind: ${sessionId}`);
-        }
+        // ConsoleKit sessions: no login1 objects, no Id; match by object path
+        const currentSessionProxy = await this._loginManager.getCurrentSessionProxy();
+        const currentPath = currentSessionProxy?.g_object_path;
 
         const sessions = await this._loginManager.listSessions();
         for (const [id_, uid_, userName, seat_, sessionPath] of sessions) {
-            let proxy = new LogindSession(Gio.DBus.system, 'org.freedesktop.login1', sessionPath);
+            let proxy = this._loginManager.getSession(sessionPath);
 
-            if (proxy.Class !== 'user')
+            if (proxy['session-class'] !== 'user')
                 continue;
 
-            if (proxy.State === 'closing')
+            if (proxy['session-state'] === 'closing')
                 continue;
 
-            if (proxy.Id === sessionId)
+            if (sessionPath === currentPath)
                 continue;
 
             const session = {
                 user: this._userManager.get_user(userName),
                 username: userName,
-                type: proxy.Type,
-                remote: proxy.Remote,
+                type: proxy['session-type'],
+                remote: !proxy['is-local'],
             };
             const nSessions = this._sessions.push(session);
 
