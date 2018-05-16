Tentative workaround for what looks like a GCC 8.1 bug.

--- src/math.hpp.orig	2017-01-15 22:49:22.000000000 +0000
+++ src/math.hpp
@@ -255,61 +255,51 @@ inline bool is_unitary(const T &x)
 template <typename T, typename = void>
 struct negate_impl {
 private:
-    // NOTE: inside this type trait, U is always a non-const non-reference type.
     template <typename U>
-    using generic_enabler =
-        typename std::enable_if<!std::is_integral<U>::value
-                                    && detail::true_tt<decltype(std::declval<U &>() = -std::declval<U &>())>::value,
-                                int>::type;
+    using negate_t = decltype(std::declval<U &>() = -std::declval<U &>());
     template <typename U>
-    using integral_enabler = typename std::enable_if<std::is_integral<U>::value, int>::type;
+    static void negate_imple(U &x, const std::true_type &)
+    {
+        x = static_cast<U>(-x);
+    }
+    template <typename U>
+    static void negate_imple(U &x, const std::false_type &)
+    {
+        x = -x;
+    }
 
 public:
     /// Generic call operator.
     /**
      * \note
-     * This operator is enabled only if the expression <tt>x = -x</tt> is well-formed and
-     * \p U is not a C++ integral type.
+     * This operator is enabled only if the expression <tt>x = -x</tt> is well-formed.
      *
      * The body of the operator is equivalent to:
      * @code
      * x = -x;
      * @endcode
-     * The other overload of this operator is specialised for C++ integral types, and it behaves identically.
      *
      * @param x value to be negated.
      *
      * @throws unspecified any exception resulting from the in-place negation or assignment of \p x.
      */
-    template <typename U, generic_enabler<U> = 0>
+    template <typename U, enable_if_t<is_detected<negate_t, U>::value, int> = 0>
     void operator()(U &x) const
     {
-        x = -x;
-    }
-    /// Call operator specialised for integral types.
-    /**
-     * @param x the integral value that will be negated.
-     */
-    template <typename U, integral_enabler<U> = 0>
-    void operator()(U &x) const
-    {
-        // NOTE: here we use the explicit static_cast to cope with integral promotions
-        // (e.g., in case of char).
-        x = static_cast<U>(-x);
+        negate_imple(x, std::is_integral<U>{});
     }
 };
-}
+} // namespace math
 
 namespace detail
 {
 
 // Enabler for math::negate().
 template <typename T>
-using math_negate_enabler =
-    typename std::enable_if<!std::is_const<T>::value
-                                && true_tt<decltype(math::negate_impl<T>{}(std::declval<T &>()))>::value,
-                            int>::type;
-}
+using math_negate_enabler = typename std::enable_if<
+    conjunction<negation<std::is_const<T>>, true_tt<decltype(math::negate_impl<T>{}(std::declval<T &>()))>>::value,
+    int>::type;
+} // namespace detail
 
 namespace math
 {
