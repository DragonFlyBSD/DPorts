--- Modules/Core/Common/include/itkMetaProgrammingLibrary.h.orig	2019-07-23 19:56:55 UTC
+++ Modules/Core/Common/include/itkMetaProgrammingLibrary.h
@@ -172,18 +172,9 @@ template < typename TF> struct Not : Not
  *
  * Identifies if "static_cast<TToType>(TFromType)" can be done.
  */
-template <typename TFromType, typename TToType, typename TNoDeclType = TToType>
-struct is_static_castable
-  : std::false_type
-{};
-/// \cond SPECIALIZATION_IMPLEMENTATION
 template <typename TFromType, typename TToType>
-struct is_static_castable<TFromType,
-                          TToType,
-                          decltype(static_cast<TToType>(std::declval<TFromType>()))>
-  : std::true_type
-{};
-/// \endcond
+using is_static_castable = std::integral_constant<bool,
+  std::is_constructible<TToType, TFromType>::value || std::is_convertible<TFromType, TToType>::value>;
 } // mpl namespace
 
 
