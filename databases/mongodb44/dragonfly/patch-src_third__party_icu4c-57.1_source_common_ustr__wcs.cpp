--- src/third_party/icu4c-57.1/source/common/ustr_wcs.cpp.orig	2022-11-01 18:21:44 UTC
+++ src/third_party/icu4c-57.1/source/common/ustr_wcs.cpp
@@ -340,7 +340,7 @@ _strFromWCS( UChar   *dest,
         pSrcLimit = src + srcLength;
 
         for(;;){
-            register int32_t nulLen = 0;
+            int32_t nulLen = 0;
 
             /* find nulls in the string */
             while(nulLen<srcLength && pSrc[nulLen++]!=0){
