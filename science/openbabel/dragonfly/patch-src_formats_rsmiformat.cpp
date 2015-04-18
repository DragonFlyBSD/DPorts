--- src/formats/rsmiformat.cpp.orig	2012-10-03 19:08:14 UTC
+++ src/formats/rsmiformat.cpp
@@ -181,7 +181,7 @@ namespace OpenBabel
     }
     mols = jreactants.Separate();
     for(itr=mols.begin();itr!=mols.end();++itr)
-      pReact->AddReactant(shared_ptr<OBMol>(new OBMol(*itr)));
+      pReact->AddReactant(obsharedptr<OBMol>(new OBMol(*itr)));
 
     pos2 = rsmiles.find('>', pos+1);
     if(pos2==string::npos)
@@ -201,7 +201,7 @@ namespace OpenBabel
         delete pAgent;
         return false;
       }
-      pReact->AddAgent(shared_ptr<OBMol>(pAgent));
+      pReact->AddAgent(obsharedptr<OBMol>(pAgent));
     }
 
     //Extract products and split into separate molecules
@@ -215,7 +215,7 @@ namespace OpenBabel
     mols.clear();
     mols = jproducts.Separate();
     for(itr=mols.begin();itr!=mols.end();++itr)
-      pReact->AddProduct(shared_ptr<OBMol>(new OBMol(*itr)));
+      pReact->AddProduct(obsharedptr<OBMol>(new OBMol(*itr)));
 
     return true;
   }
@@ -247,7 +247,7 @@ namespace OpenBabel
 
     ofs << '>';
 
-    shared_ptr<OBMol> spAgent = pReact->GetAgent();
+    obsharedptr<OBMol> spAgent = pReact->GetAgent();
     if(spAgent.get())
       if(!pSmiFormat->WriteMolecule(spAgent.get(), pConv))
         return false;
