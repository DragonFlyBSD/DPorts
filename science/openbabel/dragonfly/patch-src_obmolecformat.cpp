--- src/obmolecformat.cpp.orig	2012-10-03 19:08:15 UTC
+++ src/obmolecformat.cpp
@@ -439,7 +439,7 @@ namespace OpenBabel
     //Output all the constituent molecules of the reaction
 
     //Collect the molecules first, just for convenience
-    vector<shared_ptr<OBMol> > mols;
+    vector<obsharedptr<OBMol> > mols;
     unsigned i;
     for(i=0;i<pReact->NumReactants();i++)
       mols.push_back(pReact->GetReactant(i));
