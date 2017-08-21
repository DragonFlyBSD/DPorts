--- src/Gtk2HsSetup.hs.orig	2017-01-14 09:17:54 UTC
+++ src/Gtk2HsSetup.hs
@@ -253,6 +253,7 @@ runC2HS bi lbi (inDir, inFile)  (outDir,
   c2hsMain $
        map ("--include=" ++) (outDir:chiDirs)
     ++ [ "--cpp=" ++ programPath gccProg, "--cppopts=-E" ]
+    ++ ["--cppopts=-D_Bool=int"]
     ++ ["--cppopts=" ++ opt | opt <- getCppOptions bi lbi]
     ++ ["--output-dir=" ++ newOutDir,
         "--output=" ++ newOutFile,
