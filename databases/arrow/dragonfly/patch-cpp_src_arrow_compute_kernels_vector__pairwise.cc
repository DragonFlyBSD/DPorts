--- src/arrow/compute/kernels/vector_pairwise.cc.orig	2023-08-17 08:05:04 UTC
+++ src/arrow/compute/kernels/vector_pairwise.cc
@@ -56,7 +56,7 @@ Status PairwiseExecImpl(KernelContext* c
                         ArrayData* result) {
   // We only compute values in the region where the input-with-offset overlaps
   // the original input. The margin where these do not overlap gets filled with null.
-  const auto margin_length = std::min(abs(periods), input.length);
+  const auto margin_length = std::min<unsigned long>(abs(periods), input.length);
   const auto computed_length = input.length - margin_length;
   const auto computed_start = periods > 0 ? margin_length : 0;
   const auto left_start = computed_start;
