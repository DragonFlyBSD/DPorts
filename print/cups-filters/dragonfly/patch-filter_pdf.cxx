--- filter/pdf.cxx.orig	2019-08-21 15:31:53 UTC
+++ filter/pdf.cxx
@@ -20,6 +20,7 @@
 #include "pdf.h"
 #include <vector>
 #include <string>
+#include <cstring>	/* for memcpy(), strcmp() */
 #include <qpdf/QPDF.hh>
 #include <qpdf/QPDFObjectHandle.hh>
 #include <qpdf/QPDFWriter.hh>
