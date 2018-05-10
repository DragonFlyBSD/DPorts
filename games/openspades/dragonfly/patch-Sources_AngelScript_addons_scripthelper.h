--- Sources/AngelScript/addons/scripthelper.h.orig	2014-06-23 11:55:03.000000000 +0000
+++ Sources/AngelScript/addons/scripthelper.h
@@ -43,6 +43,12 @@ BEGIN_AS_NAMESPACE
 template<typename T>
 asUINT GetTypeTraits()
 {
+#if defined(__GNUC__) && __GNUC__ > 6
+	bool hasConstructor =  std::is_default_constructible<T>::value && !std::is_trivially_default_constructible<T>::value;
+	bool hasDestructor = std::is_destructible<T>::value            && !std::is_trivially_destructible<T>::value;
+	bool hasAssignmentOperator = std::is_copy_assignable<T>::value && !std::is_trivially_copy_assignable<T>::value;
+	bool hasCopyConstructor = std::is_copy_constructible<T>::value && !std::is_trivially_copy_constructible<T>::value;
+#else
 	bool hasConstructor =  std::is_default_constructible<T>::value && !std::has_trivial_default_constructor<T>::value;
 #if defined(__GNUC__) && __GNUC__ > 4 || (__GNUC__ == 4 && __GNUC_MINOR__ >= 8) 
 	// http://stackoverflow.com/questions/12702103/writing-code-that-works-when-has-trivial-destructor-is-defined-instead-of-is
@@ -52,6 +58,7 @@ asUINT GetTypeTraits()
 #endif
 	bool hasAssignmentOperator = std::is_copy_assignable<T>::value && !std::has_trivial_copy_assign<T>::value;
 	bool hasCopyConstructor = std::is_copy_constructible<T>::value && !std::has_trivial_copy_constructor<T>::value;
+#endif
 	bool isFloat = std::is_floating_point<T>::value;
 	bool isPrimitive = std::is_integral<T>::value || std::is_pointer<T>::value || std::is_enum<T>::value;
 
