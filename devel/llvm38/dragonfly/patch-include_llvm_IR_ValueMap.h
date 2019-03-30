Fix build.
--- include/llvm/IR/ValueMap.h.orig	2015-08-03 22:30:24 UTC
+++ include/llvm/IR/ValueMap.h
@@ -99,7 +99,7 @@ public:
   explicit ValueMap(const ExtraData &Data, unsigned NumInitBuckets = 64)
       : Map(NumInitBuckets), Data(Data) {}
 
-  bool hasMD() const { return MDMap; }
+  bool hasMD() const { return bool(MDMap); }
   MDMapT &MD() {
     if (!MDMap)
       MDMap.reset(new MDMapT);
