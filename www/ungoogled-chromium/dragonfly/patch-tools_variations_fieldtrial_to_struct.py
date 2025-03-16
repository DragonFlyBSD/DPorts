diff --git tools/variations/fieldtrial_to_struct.py tools/variations/fieldtrial_to_struct.py
index 872083e1cbcc..afaae404bdfa 100755
--- tools/variations/fieldtrial_to_struct.py
+++ tools/variations/fieldtrial_to_struct.py
@@ -43,6 +43,7 @@ _platforms = [
     'windows',
     'openbsd',
     'freebsd',
+    'dragonfly',
 ]
 
 _form_factors = [
