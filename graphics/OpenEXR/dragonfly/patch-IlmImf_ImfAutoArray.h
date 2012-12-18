--- IlmImf/ImfAutoArray.h.orig	2007-04-24 04:36:47.000000000 +0200
+++ IlmImf/ImfAutoArray.h	2012-12-18 17:02:04.879643000 +0100
@@ -45,6 +45,7 @@
 //-----------------------------------------------------------------------------
 
 #include "OpenEXRConfig.h"
+#include <string.h>
 
 namespace Imf {
 
@@ -57,7 +58,7 @@
     {
       public:
 
-	 AutoArray (): _data (new T [size]) {}
+	 AutoArray (): _data (new T [size]) {memset(_data, 0, size * sizeof(T));}
 	~AutoArray () {delete [] _data;}
 
 	operator T * ()			{return _data;}
