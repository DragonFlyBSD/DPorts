-- Remove specializations of standard type traits for uint256_t.
-- Modern libc++ (and the C++ standard) forbids users from specializing
-- std::is_integral, std::is_arithmetic and std::is_unsigned.  These
-- specializations caused hard errors like:
--   'is_integral' cannot be specialized: Users are not allowed to specialize
--   this standard library entity
-- The non-template member/free operators already handle uint256_t operands,
-- so the specializations are unnecessary for the existing code.
--
-- See upstream issue: https://github.com/TheAlgorithms/C-Plus-Plus/issues

--- ciphers/uint256_t.hpp.orig	2026-07-14 02:51:25 UTC
+++ ciphers/uint256_t.hpp
@@ -17,15 +17,6 @@ class uint256_t;

 class uint256_t;

-template <>
-struct std::is_integral<uint256_t> : std::true_type {};
-
-template <>
-struct std::is_arithmetic<uint256_t> : std::true_type {};
-
-template <>
-struct std::is_unsigned<uint256_t> : std::true_type {};
-
 /**
  * @class uint256_t
  * @brief class for 256-bit unsigned integer
