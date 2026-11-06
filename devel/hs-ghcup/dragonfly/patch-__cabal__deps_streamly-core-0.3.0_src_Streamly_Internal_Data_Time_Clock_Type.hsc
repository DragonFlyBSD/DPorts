--- _cabal_deps/streamly-core-0.3.0/src/Streamly/Internal/Data/Time/Clock/Type.hsc.orig	2001-09-09 01:46:40 UTC
+++ _cabal_deps/streamly-core-0.3.0/src/Streamly/Internal/Data/Time/Clock/Type.hsc
@@ -29,7 +29,7 @@ where
 
 import Data.Int (Int32, Int64)
 import Data.Typeable (Typeable)
-import Data.Word (Word32)
+import Data.Word (Word32, Word64)
 import Foreign.C (CInt(..), throwErrnoIfMinus1_, CTime(..), CLong(..))
 import Foreign.Marshal.Alloc (alloca)
 import Foreign.Ptr (Ptr)
