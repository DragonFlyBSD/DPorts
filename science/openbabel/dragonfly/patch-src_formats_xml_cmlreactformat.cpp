--- src/formats/xml/cmlreactformat.cpp.orig	2012-10-03 19:08:13 UTC
+++ src/formats/xml/cmlreactformat.cpp
@@ -91,15 +91,15 @@ public:
   };
 
 private:
-  typedef map<string,shared_ptr<OBMol> > MolMap;
-  string AddMolToList(shared_ptr<OBMol> spmol, MolMap& mmap);
+  typedef map<string,obsharedptr<OBMol> > MolMap;
+  string AddMolToList(obsharedptr<OBMol> spmol, MolMap& mmap);
   bool WriteRateData(OBReaction* pReact, xmlChar* altprefix);
   void WriteMetadataList(OBReaction& react);
 
 private:
   OBReaction* _preact;
   OBMol* pmol;
-  shared_ptr<OBMol> _spmol;
+  obsharedptr<OBMol> _spmol;
   MolMap IMols; //used on input
   MolMap OMols; //used on output
   int nextmol;
@@ -123,7 +123,7 @@ bool CMLReactFormat::ReadChemObject(OBCo
   {
     IMols.clear();
     //add special species
-    shared_ptr<OBMol> sp(new OBMol);
+    obsharedptr<OBMol> sp(new OBMol);
     sp.get()->SetTitle("M");
     IMols["M"] = sp;
   }
@@ -192,7 +192,7 @@ bool CMLReactFormat::DoElement(const str
     }
     else
     {
-      shared_ptr<OBMol> sp(new OBMol);
+      obsharedptr<OBMol> sp(new OBMol);
       OBFormat* pCMLFormat = OBConversion::FindFormat("cml");
       if(!pCMLFormat)
         return false;
@@ -331,7 +331,7 @@ bool CMLReactFormat::WriteChemObject(OBC
     OBMol* pmol = dynamic_cast<OBMol*>(pOb);
     if(pmol!=NULL)
     {
-      shared_ptr<OBMol> sp(pmol);
+      obsharedptr<OBMol> sp(pmol);
       AddMolToList(sp, OMols);
       pConv->SetOutputIndex(-1); //Signals that molecules have been added
 
@@ -624,7 +624,7 @@ bool CMLReactFormat::WriteMolecule(OBBas
   return true;
 }
 
-string CMLReactFormat::AddMolToList(shared_ptr<OBMol> spmol, MolMap& mmap)
+string CMLReactFormat::AddMolToList(obsharedptr<OBMol> spmol, MolMap& mmap)
 {
   //Adds a molecule to the map
   string id = spmol->GetTitle();
@@ -664,7 +664,7 @@ string CMLReactFormat::AddMolToList(shar
     {
       //already in map.
       //Get a molecule with the best bits of both old and new molecules and immediately make a shared_ ptr
-      shared_ptr<OBMol> spnew(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(), spmol.get()));
+      obsharedptr<OBMol> spnew(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(), spmol.get()));
       if(spnew)
       {
         spmol.swap(spnew);
