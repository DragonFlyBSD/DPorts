sw/source/core/bastyp/calc.cxx: In member function 'SwSbxValue SwCalc::PrimFunc(bool&)':
sw/source/core/bastyp/calc.cxx:1073:39: error: no matching function for call to 'SwCalc::StdFunc(<unresolved overloaded function type>, bool)'
             return StdFunc(&abs, false);
sw/source/core/bastyp/calc.cxx:1035:12: note: candidate: 'SwSbxValue SwCalc::StdFunc(pfCalc, bool)'
 SwSbxValue SwCalc::StdFunc(pfCalc pFnc, bool bChkTrig)
sw/source/core/bastyp/calc.cxx:1035:12: note:   no known conversion for argument 1 from '<unresolved overloaded function type>' to 'pfCalc' {aka 'double (*)(double)'}


--- sw/source/core/bastyp/calc.cxx.orig	2021-09-08 17:53:20 UTC
+++ sw/source/core/bastyp/calc.cxx
@@ -1070,7 +1070,7 @@ SwSbxValue SwCalc::PrimFunc(bool &rChkPo
             return StdFunc(&acos, true);
         case CALC_ABS:
             SAL_INFO("sw.calc", "abs");
-            return StdFunc(&abs, false);
+            return StdFunc(&fabs, false);
         case CALC_SIGN:
         {
             SAL_INFO("sw.calc", "sign");
