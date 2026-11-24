--- ppmdi/Model.cpp.orig
+++ ppmdi/Model.cpp
@@ -232,7 +232,7 @@
 {
   BYTE indx = NS2BSIndx[ctxt->Suffix->NumStats] + PrevSuccess + ctxt->Flags;
   STATE & rs = ctxt->ONESTATE;
-  WORD & bs =
+  WORD & bs = *(WORD *) &
     BinSumm[QTable[rs.Freq - 1]][indx +
 					   ((RunLength >> 26) & 0x20)];
   if (rs.Symbol == symbol)
@@ -261,7 +261,7 @@
 {
   BYTE indx = NS2BSIndx[ctxt->Suffix->NumStats] + PrevSuccess + ctxt->Flags;
   STATE & rs = ctxt->ONESTATE;
-  WORD & bs =
+  WORD & bs = *(WORD *) &
     BinSumm[QTable[rs.Freq - 1]][indx +
 					   ((RunLength >> 26) & 0x20)];
   if (data->ariGetCurrentShiftCount (TOT_BITS) < bs)
