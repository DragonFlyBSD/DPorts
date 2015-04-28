Please check if index is within constaints *BEFORE* using it.
This error was caught by GCC5 diagnostics

--- menu.c.orig	2014-11-04 10:25:00 UTC
+++ menu.c
@@ -968,8 +968,8 @@ if(parnum == SECOND_FFT_ATT_N)
 if(parnum == SECOND_FFT_VERNR)
   {
   i=0;
-  while( fft2_version[ui.rx_rf_channels-1][i+1] > 0 &&
-                                      i < MAX_FFT2_VERNR-1)i++;
+  while( i < MAX_FFT2_VERNR-1 && 
+         fft2_version[ui.rx_rf_channels-1][i+1] > 0)i++;
   if(mmx_present == 0)
     {
     while( fft_cntrl[fft2_version[ui.rx_rf_channels-1][i]].mmx != 0)i--;
