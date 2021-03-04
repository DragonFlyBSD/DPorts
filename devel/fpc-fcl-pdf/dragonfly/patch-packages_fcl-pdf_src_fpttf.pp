--- packages/fcl-pdf/src/fpttf.pp.orig	2019-04-20 21:06:37 UTC
+++ packages/fcl-pdf/src/fpttf.pp
@@ -523,6 +523,12 @@ procedure TFPFontCacheList.ReadStandardF
       cFontsConf = '/etc/fonts/fonts.conf';
   {$endif}
 
+  {$ifdef dragonfly}
+    {$define HasFontsConf}
+    const
+      cFontsConf = '/usr/local/etc/fonts/fonts.conf';
+  {$endif}
+
   {$ifdef freebsd}
     {$define HasFontsConf}
     const
