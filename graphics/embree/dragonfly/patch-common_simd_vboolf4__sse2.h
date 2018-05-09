--- common/simd/vboolf4_sse2.h.orig	2018-02-21 06:08:04.000000000 +0000
+++ common/simd/vboolf4_sse2.h
@@ -117,7 +117,7 @@ namespace embree
 
   template<int i0, int i1, int i2, int i3>
   __forceinline vboolf4 shuffle(const vboolf4& v) {
-    return _mm_shuffle_epi32(v, _MM_SHUFFLE(i3, i2, i1, i0));
+    return _mm_castsi128_ps(_mm_shuffle_epi32(v, _MM_SHUFFLE(i3, i2, i1, i0)));
   }
 
   template<int i0, int i1, int i2, int i3>
