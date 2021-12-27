--- Misc/Misc2.c.orig	2011-05-08 13:59:16 UTC
+++ Misc/Misc2.c
@@ -316,5 +316,5 @@ IPA__Misc_combine_channels( SV * input,
       } break;
    }
 
-   return nilHandle;
+   return (void*)0;
 }
