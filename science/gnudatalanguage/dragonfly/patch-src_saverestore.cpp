--- src/saverestore.cpp.intermediate	2018-05-14 16:34:56.000000000 +0300
+++ src/saverestore.cpp
@@ -78,6 +78,10 @@ namespace lib {
 #define xdr_uint64_t xdr_u_int64_t
 #endif
 
+#ifdef __DragonFly__
+#define xdr_uint16_t xdr_u_int16_t
+#endif
+
   //this is the routined used by IDL as per the documentation.
 
   bool_t xdr_complex(XDR *xdrs, DComplex *p) {
