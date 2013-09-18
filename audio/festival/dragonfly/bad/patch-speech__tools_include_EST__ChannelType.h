--- speech_tools/include/EST_ChannelType.h.orig	2004-05-04 00:00:16.000000000 +0000
+++ speech_tools/include/EST_ChannelType.h
@@ -135,7 +135,7 @@ enum EST_CoefficientType
   * D  = Number of levels of differentiation.
   * SE = Start=0 end=1
   */
-#define EST_CoefChannelId(CT,D,SE) ( (CT)<<3 | (D)<<1 & 6 | (SE)&1 )
+#define EST_CoefChannelId(CT,D,SE) ( (CT)<<3 | ((D)<<1 & 6) | ((SE)&1))
 
 /** Build a number representing a channel type for a single value which can
   * N = count starting from 0
