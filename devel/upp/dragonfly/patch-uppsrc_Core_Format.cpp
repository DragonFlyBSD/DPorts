--- uppsrc/Core/Format.cpp.orig	2014-04-13 06:18:48 UTC
+++ uppsrc/Core/Format.cpp
@@ -198,7 +198,7 @@ static char *PutDigits(char *out, unsign
 	return out;
 }
 
-enum { DBL_DIGITS = (int)(DBL_MANT_DIG * M_LN2 / M_LN10) + 2 };
+enum { DBL_DIGITS = 17 }; //(int)(DBL_MANT_DIG * M_LN2 / M_LN10) + 2 
 
 String FormatDoubleDigits(double d, int raw_digits, int flags, int& exponent)
 {
