--- onnx/defs/sequence/defs.cc.orig	2026-06-15 11:54:54 UTC
+++ onnx/defs/sequence/defs.cc
@@ -74,7 +74,7 @@ ONNX_OPERATOR_SET_SCHEMA(
             }
             input_elem_types.emplace_back(input_type->tensor_type().elem_type());
           }
-          if (std::adjacent_find(input_elem_types.begin(), input_elem_types.end(), std::not_equal_to()) !=
+          if (std::adjacent_find(input_elem_types.begin(), input_elem_types.end(), std::not_equal_to<int>()) !=
               input_elem_types.end()) {
             // not all input elem types are the same.
             fail_type_inference("Element type of inputs are expected to be the same.");
