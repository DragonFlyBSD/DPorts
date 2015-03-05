--- mozilla/dom/ipc/Blob.cpp.orig	2015-02-05 04:39:51 UTC
+++ mozilla/dom/ipc/Blob.cpp
@@ -3874,7 +3874,7 @@ BlobParent::RecvPBlobStreamConstructor(P
   // Make sure we can't overflow.
   if (NS_WARN_IF(UINT64_MAX - aLength < aStart)) {
     ASSERT_UNLESS_FUZZING();
-    return nullptr;
+    return false;
   }
 
   ErrorResult errorResult;
@@ -3883,7 +3883,7 @@ BlobParent::RecvPBlobStreamConstructor(P
 
   if (NS_WARN_IF(aStart + aLength > blobLength)) {
     ASSERT_UNLESS_FUZZING();
-    return nullptr;
+    return false;
   }
 
   nsRefPtr<FileImpl> blobImpl;
