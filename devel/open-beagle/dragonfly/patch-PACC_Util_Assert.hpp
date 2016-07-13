--- PACC/Util/Assert.hpp.orig	2007-09-11 05:25:56.000000000 +0300
+++ PACC/Util/Assert.hpp
@@ -69,6 +69,8 @@ if(!(COND)) { \
 #else
 /////// otherwise, output message to console ///////
 #include <iostream>
+#include <cstdlib>
+#include <cstring>
 #define PACC_AssertM(COND,MESSAGE) \
 if(!(COND)) { \
 	std::cerr << "\n***** PACC assert failed *****\nin "; \
