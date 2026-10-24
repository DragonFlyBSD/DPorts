-- Remove specializations of standard type traits for uint128_t.
-- Modern libc++ (and the C++ standard) forbids users from specializing
-- std::is_integral, std::is_arithmetic and std::is_unsigned.  These
-- specializations caused hard errors like:
--   'is_integral' cannot be specialized: Users are not allowed to specialize
--   this standard library entity
-- The non-template member/free operators already handle uint128_t operands,
-- so the specializations are unnecessary for the existing code.
--
-- See upstream issue: https://github.com/TheAlgorithms/C-Plus-Plus/issues

--- ciphers/uint128_t.hpp.orig	2026-07-14 02:51:25 UTC
+++ ciphers/uint128_t.hpp
@@ -21,13 +21,6 @@ class uint128_t;
 #define CIPHERS_UINT128_T_HPP_
 class uint128_t;

-template <>
-struct std::is_integral<uint128_t> : std::true_type {};
-template <>
-struct std::is_arithmetic<uint128_t> : std::true_type {};
-template <>
-struct std::is_unsigned<uint128_t> : std::true_type {};
-
 /**
  * @brief Adding two string
  * @details Adds two long integer, only used for printing numbers
