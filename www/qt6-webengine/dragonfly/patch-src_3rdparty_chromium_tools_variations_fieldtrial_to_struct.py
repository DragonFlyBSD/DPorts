diff --git tools/variations/fieldtrial_to_struct.py tools/variations/fieldtrial_to_struct.py
index 5d246cff4f1..c6aba7500ab 100755
--- src/3rdparty/chromium/tools/variations/fieldtrial_to_struct.py
+++ src/3rdparty/chromium/tools/variations/fieldtrial_to_struct.py
@@ -43,6 +43,7 @@ _platforms = [
     'windows',
     'openbsd',
     'freebsd',
+    'dragonfly',
 ]
 
 _form_factors = [
