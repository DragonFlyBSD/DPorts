--- Gtk2HsSetup.hs.orig	2015-06-21 10:33:55 UTC
+++ Gtk2HsSetup.hs
@@ -254,6 +254,7 @@ runC2HS bi lbi (inDir, inFile)  (outDir,
   rawSystemProgramConf verbosity c2hsLocal (withPrograms lbi) $
        map ("--include=" ++) (outDir:chiDirs)
     ++ [ "--cpp=" ++ programPath gccProg, "--cppopts=-E" ]
+    ++ ["--cppopts=-D_Bool=int"]
     ++ ["--cppopts=" ++ opt | opt <- getCppOptions bi lbi]
     ++ ["--output-dir=" ++ newOutDir,
         "--output=" ++ newOutFile,
