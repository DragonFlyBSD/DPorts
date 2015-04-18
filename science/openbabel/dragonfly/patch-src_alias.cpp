--- src/alias.cpp.orig	2012-10-05 20:17:36 UTC
+++ src/alias.cpp
@@ -21,6 +21,7 @@ GNU General Public License for more deta
 #include <openbabel/parsmart.h>
 #include <openbabel/mcdlutil.h>
 #include <openbabel/atomclass.h>
+#include <openbabel/shared_ptr.h>
 
 using namespace std;
 namespace OpenBabel
@@ -270,7 +271,7 @@ bool AliasData::LoadFile(SmartsTable& sm
         //OBSmartsPattern objects are not copyable without complications,
         //so reference semantics used.
 
-        shared_ptr<OBSmartsPattern> psp(new OBSmartsPattern);
+        obsharedptr<OBSmartsPattern> psp(new OBSmartsPattern);
         psp->Init(ssmarts.str());
         smtable.push_back(make_pair(vec[0], psp));
       }
