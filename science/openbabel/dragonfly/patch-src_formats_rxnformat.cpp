--- src/formats/rxnformat.cpp.orig	2012-10-03 19:08:14 UTC
+++ src/formats/rxnformat.cpp
@@ -175,7 +175,7 @@ bool RXNFormat::ReadMolecule(OBBase* pOb
         obErrorLog.ThrowError(__FUNCTION__, "Failed to read a reactant", obWarning);
       else
       {
-        shared_ptr<OBMol> p(pmol);
+        obsharedptr<OBMol> p(pmol);
         pReact->AddReactant(p);
       }
     }
@@ -189,7 +189,7 @@ bool RXNFormat::ReadMolecule(OBBase* pOb
       else
       {
         //        pReact->products.push_back(pmol);
-        shared_ptr<OBMol> p(pmol);
+        obsharedptr<OBMol> p(pmol);
         pReact->AddProduct(p);
       }
     }
