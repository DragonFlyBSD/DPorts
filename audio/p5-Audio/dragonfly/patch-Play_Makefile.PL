--- PLAY/Makefile.PL.orig	2004-01-06 09:56:03.000000000 +0200
+++ Play/Makefile.PL
@@ -80,7 +80,7 @@ foreach ($^O)
      }
     $driver = 'oss';
    }
-  elsif (/^(\w+bsd)$/i)
+  elsif (/^(\w+bsd|dragonfly)$/i)
    {
     $driver = 'oss';
    }
