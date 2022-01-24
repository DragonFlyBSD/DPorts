--- include/crossguid/guid.hpp.orig	2019-05-29 15:36:34 UTC
+++ include/crossguid/guid.hpp
@@ -52,7 +52,9 @@ public:
 	explicit Guid(const std::array<unsigned char, 16> &bytes);
 	explicit Guid(std::array<unsigned char, 16> &&bytes);
 
+#if __GNUC__ != 8 || __cplusplus >=  201703L
 	explicit Guid(std::string_view fromString);
+#endif
 	Guid();
 	
 	Guid(const Guid &other) = default;
