Parse statements like: "extern __thread int errno;"

--- gtk2hs-buildtools-0.13.8.0/c2hs/c/CAST.hs.orig	2001-09-09 01:46:40 UTC
+++ gtk2hs-buildtools-0.13.8.0/c2hs/c/CAST.hs
@@ -1140,6 +1140,9 @@ instance Binary CStorageSpec where
     put_ bh (CTypedef ae) = do
             putByte bh 4
             put_ bh ae
+    put_ bh (CThread ae) = do
+            putByte bh 5
+            put_ bh ae
     get bh = do
             h <- getByte bh
             case h of
@@ -1158,6 +1161,9 @@ instance Binary CStorageSpec where
               4 -> do
                     ae <- get bh
                     return (CTypedef ae)
+              5 -> do
+                    ae <- get bh
+                    return (CThread ae)
 
 instance Binary CTypeQual where
     put_ bh (CConstQual aa) = do
