Fix integer overflow in tilingPatternFill

https://gitlab.freedesktop.org/poppler/poppler/-/commit/8352264766652b98336e92359a70b3161a9ab97a

--- poppler/SplashOutputDev.cc.orig	2026-07-14 05:03:29 UTC
+++ poppler/SplashOutputDev.cc
@@ -45,6 +45,7 @@
 // Copyright (C) 2020-2022 Oliver Sander <oliver.sander@tu-dresden.de>
 // Copyright (C) 2024-2026 g10 Code GmbH, Author: Sune Stolborg Vuorela <sune@vuorela.dk>
 // Copyright (C) 2025 Arnav V <arnav0872@gmail.com>
+// Copyright (C) 2026 Marek Kasik <mkasik@redhat.com>
 //
 // To see a description of the changes please see the Changelog file that
 // came with your tarball or type make ChangeLog if you are building from git
@@ -4337,7 +4338,7 @@ bool SplashOutputDev::tilingPatternFill(GfxState *stat
     matc[2] = ctm[2];
     matc[3] = ctm[3];
 
-    if (surface_width == 0 || surface_height == 0 || repeatX * repeatY <= 4) {
+    if (surface_width == 0 || surface_height == 0 || repeatX * repeatY <= 4 || checkedMultiply(surface_width, repeatX, &result_width) || checkedMultiply(surface_height, repeatY, &result_height)) {
         state->setCTM(savedCTM[0], savedCTM[1], savedCTM[2], savedCTM[3], savedCTM[4], savedCTM[5]);
         return false;
     }
@@ -4359,8 +4360,6 @@ bool SplashOutputDev::tilingPatternFill(GfxState *stat
         kx = matc[0];
         ky = matc[3] - (matc[1] * matc[2]) / matc[0];
     }
-    result_width = surface_width * repeatX;
-    result_height = surface_height * repeatY;
     kx = result_width / (fabs(kx) + 1);
     ky = result_height / (fabs(ky) + 1);
     state->concatCTM(kx, 0, 0, ky, 0, 0);
