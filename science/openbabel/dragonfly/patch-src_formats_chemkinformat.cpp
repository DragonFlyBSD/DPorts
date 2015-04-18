--- src/formats/chemkinformat.cpp.orig	2012-10-03 19:08:14 UTC
+++ src/formats/chemkinformat.cpp
@@ -78,7 +78,7 @@ private:
   bool              ReadHeader(istream& ifs, OBConversion* pConv);
   bool              ParseReactionLine(OBReaction* pReact, OBConversion* pConv);
   bool              ReadReactionQualifierLines(istream& ifs, OBReaction* pReact);
-  shared_ptr<OBMol> CheckSpecies(string& name, string& ln, bool MustBeKnown);
+  obsharedptr<OBMol> CheckSpecies(string& name, string& ln, bool MustBeKnown);
   bool              ReadThermo(OBConversion* pConv);
   bool              ReadStdThermo(const string& datafilename);
   OBFormat*         GetThermoFormat();
@@ -86,8 +86,8 @@ private:
   bool              WriteReactionLine(OBReaction* pReact, OBConversion* pConv);
   bool              WriteHeader(OBConversion* pConv);
 private:
-  typedef map<string,shared_ptr<OBMol> > MolMap;
-  typedef set<shared_ptr<OBMol> > MolSet;
+  typedef map<string,obsharedptr<OBMol> > MolMap;
+  typedef set<obsharedptr<OBMol> > MolSet;
   //used on input
   MolMap IMols;
   string ln;
@@ -215,7 +215,7 @@ void ChemKinFormat::Init()
     SpeciesListed=false;
     IMols.clear();
     //Special species name
-    shared_ptr<OBMol> sp(new OBMol);
+    obsharedptr<OBMol> sp(new OBMol);
     sp.get()->SetTitle("M");
     IMols["M"] = sp;
 }
@@ -280,7 +280,7 @@ bool ChemKinFormat::ReadHeader(istream&
           break;
         }
         //Add all species to IMols
-        shared_ptr<OBMol> sp(new OBMol);
+        obsharedptr<OBMol> sp(new OBMol);
         sp.get()->SetTitle(*itr);
         IMols[*itr] = sp;
       }
@@ -346,7 +346,7 @@ bool ChemKinFormat::ParseReactionLine(OB
   OBRateData* pRD = new OBRateData; //to store rate constant data. Attach only if rate data found
 
   int n=0;
-  shared_ptr<OBMol> sp;
+  obsharedptr<OBMol> sp;
 
   string::size_type eqpos = ln.find('=');
 
@@ -643,7 +643,7 @@ bool ChemKinFormat::ReadReactionQualifie
 }
 
 ///////////////////////////////////////////////////////////////
-shared_ptr<OBMol> ChemKinFormat::CheckSpecies(string& name, string& ln, bool MustBeKnown)
+obsharedptr<OBMol> ChemKinFormat::CheckSpecies(string& name, string& ln, bool MustBeKnown)
 {
   MolMap::iterator mapitr = IMols.find(name);
   if(mapitr==IMols.end())
@@ -653,14 +653,14 @@ shared_ptr<OBMol> ChemKinFormat::CheckSp
     {
       obErrorLog.ThrowError(__FUNCTION__,
         name + " not recognized as a species in\n" + ln, obError);
-      shared_ptr<OBMol> sp;
+      obsharedptr<OBMol> sp;
       return sp; //empty
     }
     else
     {
       // There was no REACTIONS section in input file and probably no SPECIES section.
       // Unknown species that appear in a reaction can be made here with just a name.
-      shared_ptr<OBMol> sp(new OBMol);
+      obsharedptr<OBMol> sp(new OBMol);
       sp->SetTitle(name.c_str());
       return sp;
     }
@@ -697,7 +697,7 @@ bool ChemKinFormat::ReadThermo(OBConvers
       MolMap::iterator mapitr = IMols.find(thmol.GetTitle());
       if(mapitr!=IMols.end())
       {
-        shared_ptr<OBMol> psnewmol(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(),&thmol));
+        obsharedptr<OBMol> psnewmol(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(),&thmol));
         IMols.erase(mapitr);
         IMols[thmol.GetTitle()] = psnewmol;
       }
@@ -743,7 +743,7 @@ bool ChemKinFormat::ReadStdThermo(const
       OBMol thmol;
       stdthermo.seekg(itr->second);
       StdThermConv.Read(&thmol);
-      shared_ptr<OBMol> psnewmol(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(),&thmol));
+      obsharedptr<OBMol> psnewmol(OBMoleculeFormat::MakeCombinedMolecule(mapitr->second.get(),&thmol));
       IMols[thmol.GetTitle()] = psnewmol;
     }
     else
@@ -915,7 +915,7 @@ bool ChemKinFormat::WriteReactionLine(OB
   int i;
   for(i=0;i<pReact->NumReactants();++i)
   {
-    shared_ptr<OBMol> psMol = pReact->GetReactant(i);
+    obsharedptr<OBMol> psMol = pReact->GetReactant(i);
 //    if(strcasecmp(psMol->GetTitle(),"M"))
     OMols.insert(psMol);
 
@@ -954,7 +954,7 @@ bool ChemKinFormat::WriteReactionLine(OB
 
   for(i=0;i<pReact->NumProducts();++i)
   {
-    shared_ptr<OBMol> psMol = pReact->GetProduct(i);
+    obsharedptr<OBMol> psMol = pReact->GetProduct(i);
     if(strcasecmp(psMol->GetTitle(),"M"))
       OMols.insert(psMol);
 
