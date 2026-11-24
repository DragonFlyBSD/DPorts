--- src/libs/loguru/loguru.cpp.orig
+++ src/libs/loguru/loguru.cpp
@@ -1156,7 +1156,7 @@
 				const auto pthread_self_is_pointer = std::is_pointer<decltype(native_id)>::value;
 				const auto thread_id = pthread_self_is_pointer
 				                           ? reinterpret_cast<uintptr_t>((void*)native_id)
-				#if defined(__OpenBSD__)
+				#if defined(__OpenBSD__) || defined(__DragonFly__)
 				                           : reinterpret_cast<uintptr_t>(native_id);
 				#else
 				                           : static_cast<uintptr_t>(native_id);
