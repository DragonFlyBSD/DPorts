--- libgnu/float.in.h.orig	2012-01-06 17:10:36.000000000 +0000
+++ libgnu/float.in.h
@@ -65,7 +65,7 @@
 /* On FreeBSD/x86 6.4, the 'long double' type really has only 53 bits of
    precision in the compiler but 64 bits of precision at runtime.  See
    <http://lists.gnu.org/archive/html/bug-gnulib/2008-07/msg00063.html>.  */
-#if defined __i386__ && defined __FreeBSD__
+#if defined __i386__ && ( defined __FreeBSD__ || defined __DragonFly__ )
 /* Number of mantissa units, in base FLT_RADIX.  */
 # undef LDBL_MANT_DIG
 # define LDBL_MANT_DIG   64
