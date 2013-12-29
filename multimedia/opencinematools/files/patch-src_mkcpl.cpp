
$FreeBSD: multimedia/opencinematools/files/patch-src_mkcpl.cpp 300896 2012-07-14 13:54:48Z beat $

--- src/mkcpl.cpp.orig
+++ src/mkcpl.cpp
@@ -589,7 +589,7 @@
 	              PCMReader.FillWriterInfo(WInfo);
 
                 AAssets.push_back(Asset());
-                sprintf(buff, "%u %u", ADesc.SampleRate.Numerator, ADesc.SampleRate.Denominator);
+                sprintf(buff, "%u %u", ADesc.AudioSamplingRate.Numerator, ADesc.AudioSamplingRate.Denominator);
                 AAssets.back().EditRate = buff;
 
                 AAssets.back().IntrinsicDuration = ADesc.ContainerDuration;
