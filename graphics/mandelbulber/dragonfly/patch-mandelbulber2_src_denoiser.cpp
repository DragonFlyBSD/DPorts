--- mandelbulber2/src/denoiser.cpp.orig	2021-08-26 15:48:46 UTC
+++ mandelbulber2/src/denoiser.cpp
@@ -91,7 +91,7 @@ void cDenoiser::AllocMem()
 
 void cDenoiser::UpdatePixel(int x, int y, const sRGBFloat color, float noise)
 {
-	float filterRadius = min(sqrt(noise * noiseMultiplier) + minBlurRadius, maxBlurRadius);
+	float filterRadius = min((float)sqrt(noise * noiseMultiplier) + minBlurRadius, maxBlurRadius);
 
 	blurRadiusBuffer[x + y * width] = filterRadius;
 	blurBuffer[x + y * width] = color;
