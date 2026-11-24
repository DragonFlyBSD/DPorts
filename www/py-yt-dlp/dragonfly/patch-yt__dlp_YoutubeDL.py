--- yt_dlp/YoutubeDL.py.orig
+++ yt_dlp/YoutubeDL.py
@@ -737,7 +737,7 @@
                     raise
 
         # Note: this must be after plugins are loaded
-        self.params['js_runtimes'] = self.params.get('js_runtimes', {'deno': {}})
+        self.params['js_runtimes'] = self.params.get('js_runtimes', {'node': {}})
         self._clean_js_runtimes(self.params['js_runtimes'])
 
         self.params['remote_components'] = set(self.params.get('remote_components', ()))
