--- include/openbabel/alias.h.orig	2010-09-07 17:07:53 UTC
+++ include/openbabel/alias.h
@@ -115,7 +115,7 @@ private:
   }
   bool        FromNameLookup(OBMol& mol, const unsigned int atomindex);
 #ifdef HAVE_SHARED_POINTER
-  typedef std::vector< std::pair<std::string, shared_ptr<OBSmartsPattern> > > SmartsTable;
+  typedef std::vector< std::pair<std::string, obsharedptr<OBSmartsPattern> > > SmartsTable;
   static bool LoadFile(SmartsTable& smtable);
 #endif
 };
