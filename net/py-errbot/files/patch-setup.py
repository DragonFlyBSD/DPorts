--- setup.py.orig	2026-06-06 22:00:10 UTC
+++ setup.py
@@ -27,20 +27,20 @@ deps = [
 VERSION_FILE = os.path.join("errbot", "version.py")
 
 deps = [
-    "webtest==3.0.7",
-    "setuptools>=78.1.1",
-    "flask==3.1.3",
-    "requests==2.32.5",
-    "jinja2==3.1.6",
-    "pyOpenSSL==26.1.0",
-    "colorlog==6.10.1",
-    "markdown==3.10.2",
-    "ansi==0.3.7",
-    "Pygments==2.20.0",
-    "pygments-markdown-lexer==0.1.0.dev39",  # syntax coloring to debug md
-    "dulwich==1.2.1",  # python implementation of git
-    "deepmerge==2.0",
-    "legacy-cgi==2.6.4; python_version >= '3.13'",  # stopgap fix for webtest after cgi dropped from stdlib in 3.13
+    "webtest>=3.0.7",
+    "setuptools>=61",
+    "flask>=3.1.3",
+    "requests>=2.32.5",
+    "jinja2>=3.1.6",
+    "pyOpenSSL>=26.1.0",
+    "colorlog>=6.10.1",
+    "markdown>=3.10.2",
+    "ansi>=0.3.7",
+    "Pygments>=2.20.0",
+    "pygments-markdown-lexer>=0.1.0.dev39",  # syntax coloring to debug md
+    "dulwich>=1.2.1",  # python implementation of git
+    "deepmerge>=2.0",
+    "legacy-cgi>=2.6.4; python_version >= '3.13'",  # stopgap fix for webtest after cgi dropped from stdlib in 3.13
 ]
 
 src_root = os.curdir
@@ -110,28 +110,28 @@ if __name__ == "__main__":
         },
         extras_require={
             "slack": [
-                "errbot-backend-slackv3==0.3.2",
+                "errbot-backend-slackv3>=0.3.2",
             ],
             "discord": [
                 # held at 3.0.1: 4.0 is a major bump on external backend; compat unverified
-                "err-backend-discord==3.0.1",
+                "err-backend-discord>=3.0.1",
             ],
             "mattermost": [
-                "err-backend-mattermost==3.0.0",
+                "err-backend-mattermost>=3.0.0",
             ],
             "IRC": [
-                "irc==20.5.0",
+                "irc>=20.5.0",
             ],
             "telegram": [
                 # held at 13.15: v20+ is fully async; backend would need a rewrite
-                "python-telegram-bot==13.15",
+                "python-telegram-bot>=13.15",
             ],
             "XMPP": [
-                "slixmpp==1.15.0",
-                "pyasn1==0.6.3",
-                "pyasn1-modules==0.4.2",
+                "slixmpp>=1.15.0",
+                "pyasn1>=0.6.3",
+                "pyasn1-modules>=0.4.2",
             ],
-            ':sys_platform!="win32"': ["daemonize==2.5.0"],
+            ':sys_platform!="win32"': ["daemonize>=2.5.0"],
         },
         author="errbot.io",
         author_email="info@errbot.io",
