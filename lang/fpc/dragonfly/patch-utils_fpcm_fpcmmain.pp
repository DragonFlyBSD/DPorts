--- utils/fpcm/fpcmmain.pp.orig	2012-06-02 22:18:53.000000000 +0000
+++ utils/fpcm/fpcmmain.pp
@@ -71,7 +71,7 @@ interface
         o_amiga,o_atari, o_solaris, o_qnx, o_netware, o_openbsd,o_wdosx,
         o_palmos,o_macos,o_darwin,o_emx,o_watcom,o_morphos,o_netwlibc,
         o_win64,o_wince,o_gba,o_nds,o_embedded,o_symbian,o_nativent,o_iphonesim,
-        o_wii
+        o_wii, o_dragonfly
       );
 
       TTargetSet=array[tcpu,tos] of boolean;
@@ -94,7 +94,7 @@ interface
         'amiga','atari','solaris', 'qnx', 'netware','openbsd','wdosx',
         'palmos','macos','darwin','emx','watcom','morphos','netwlibc',
         'win64','wince','gba','nds','embedded','symbian','nativent',
-        'iphonesim', 'wii'
+        'iphonesim', 'wii', 'dragonfly'
       );
 
       OSSuffix : array[TOS] of string=(
@@ -102,7 +102,7 @@ interface
         '_amiga','_atari','_solaris', '_qnx', '_netware','_openbsd','_wdosx',
         '_palmos','_macos','_darwin','_emx','_watcom','_morphos','_netwlibc',
         '_win64','_wince','_gba','_nds','_embedded','_symbian','_nativent',
-        '_iphonesim','_wii'
+        '_iphonesim','_wii', '_dragonfly'
       );
 
       { This table is kept OS,Cpu because it is easier to maintain (PFV) }
@@ -138,7 +138,8 @@ interface
         { symbian } ( true,  false, false, false, false, true,  false, false, false, false, false, false, false, false),
         { nativent }( true,  false, false, false, false, false, false, false, false, false, false, false, false, false),
         { iphonesim }( true,  false, false, false, false, false, false, false, false, false, false, false, false, false),        
-        { wii }     ( false, false, true,  false, false, false, false, false, false, false, false, false, false, false)        
+        { wii }     ( false, false, true,  false, false, false, false, false, false, false, false, false, false, false),        
+        {dragonfly} ( false, false, false, false, true,  false, false, false, false, false, false, false, false, false)
       );
 
     type
