--- include/openbabel/reaction.h.orig	2010-10-10 02:05:12 UTC
+++ include/openbabel/reaction.h
@@ -35,10 +35,10 @@ namespace OpenBabel
 class OBReaction : public OBBase
 {
 private:
-  std::vector<shared_ptr<OBMol> > _reactants;
-  std::vector<shared_ptr<OBMol> > _products;
-  shared_ptr<OBMol> _ts;
-  shared_ptr<OBMol> _agent;
+  std::vector<obsharedptr<OBMol> > _reactants;
+  std::vector<obsharedptr<OBMol> > _products;
+  obsharedptr<OBMol> _ts;
+  obsharedptr<OBMol> _agent;
   std::string _title;
   std::string _comment;
   bool _reversible;
@@ -52,37 +52,37 @@ public:
   int NumProducts()const
   { return static_cast<int> (_products.size()); }
 
-  void AddReactant(const shared_ptr<OBMol> sp)
+  void AddReactant(const obsharedptr<OBMol> sp)
   { _reactants.push_back(sp); }
 
-  void AddProduct(const shared_ptr<OBMol> sp)
+  void AddProduct(const obsharedptr<OBMol> sp)
   { _products.push_back(sp); }
 
-  void SetTransitionState(const shared_ptr<OBMol> sp)
+  void SetTransitionState(const obsharedptr<OBMol> sp)
   { _ts = sp; }
 
-  void AddAgent(const shared_ptr<OBMol> sp)
+  void AddAgent(const obsharedptr<OBMol> sp)
   { _agent = sp; }
 
-  shared_ptr<OBMol> GetReactant(const unsigned i)
+  obsharedptr<OBMol> GetReactant(const unsigned i)
   {
-    shared_ptr<OBMol> sp;
+    obsharedptr<OBMol> sp;
     if(i<_reactants.size())
       sp = _reactants[i];
     return sp; //returns empty if out of range
   }
-  shared_ptr<OBMol> GetProduct(const unsigned i)
+  obsharedptr<OBMol> GetProduct(const unsigned i)
   {
-    shared_ptr<OBMol> sp;
+    obsharedptr<OBMol> sp;
     if(i<_products.size())
       sp = _products[i];
     return sp; //returns empty if out of range
   }
 
-  shared_ptr<OBMol> GetTransitionState()const
+  obsharedptr<OBMol> GetTransitionState()const
   { return _ts; }
 
-  shared_ptr<OBMol> GetAgent()const
+  obsharedptr<OBMol> GetAgent()const
   { return _agent; }
 
   std::string GetTitle()	const { return _title; }
