The z array must always been in multiples of four, not two.  It is populated
four at a time (j, j+1, j+2, j+3).  Without this fix, it breaks on Werror with
array subscript out of bounds on line 550.

--- caliq.c.orig	2014-11-04 10:25:00 UTC
+++ caliq.c
@@ -391,7 +391,7 @@ char s[80];
 int seg,color;
 int ia,ib;
 int i,j,k,m,n,mm,errskip;
-float z[2*MAX_ADCHAN];
+float z[4*MAX_ADCHAN];
 float t1,t2,t3;
 caliq_clear_flag=TRUE;
 clear_fft1_filtercorr();
