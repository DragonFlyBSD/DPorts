diff --git tools/variations/fieldtrial_to_struct.py tools/variations/fieldtrial_to_struct.py
index 6c29521da519..6ee31e825e12 100755
--- tools/variations/fieldtrial_to_struct.py
+++ tools/variations/fieldtrial_to_struct.py
@@ -43,6 +43,7 @@ _platforms = [
     'windows',
     'openbsd',
     'freebsd',
+    'dragonfly',
 ]
 
 _form_factors = [
