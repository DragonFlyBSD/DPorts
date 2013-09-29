--- src/Encoding/IConv.hsc.orig	2013-02-06 06:07:21.000000000 +0000
+++ src/Encoding/IConv.hsc
@@ -37,7 +37,7 @@ import Foreign
     , with, maybeWith
     , ForeignPtr, withForeignPtr, newForeignPtr
     , FunPtr
-    , Int32, Word8
+    , Int64, Word8
     )
 import Control.Exception ( bracket )
 import Data.ByteString ( ByteString, useAsCStringLen, append )
@@ -99,7 +99,7 @@ setLocale oldLocale = (maybeWith withCAS
 -----------------
 -- Getting the encoding
 
-type NLItem = #type nl_item
+type NLItem = Int64
 
 foreign import ccall nl_langinfo :: NLItem -> IO CString
 
