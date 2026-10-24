--- onnx/defs/sequence/utils.cc.orig	2026-06-15 11:54:54 UTC
+++ onnx/defs/sequence/utils.cc
@@ -146,7 +146,7 @@ std::function<void(OpSchema&)> SplitToSequenceOpGenera
                       " sum of split values=",
                       splitSizesSum);
                 }
-                if (std::adjacent_find(splitSizes.begin(), splitSizes.end(), std::not_equal_to()) == splitSizes.end()) {
+                if (std::adjacent_find(splitSizes.begin(), splitSizes.end(), std::not_equal_to<int64_t>()) == splitSizes.end()) {
                   // all split sizes are the same.
                   return splitSizes[0];
                 }
