diff --git tools/variations/fieldtrial_to_struct.py tools/variations/fieldtrial_to_struct.py
index 0044c58611b..88e7aa8d785 100755
--- tools/variations/fieldtrial_to_struct.py
+++ tools/variations/fieldtrial_to_struct.py
@@ -43,6 +43,7 @@ _platforms = [
     'windows',
     'openbsd',
     'freebsd',
+    'dragonfly',
 ]
 
 _form_factors = [
