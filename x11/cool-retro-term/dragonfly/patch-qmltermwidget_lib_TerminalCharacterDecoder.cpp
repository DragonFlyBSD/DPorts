--- qmltermwidget/lib/TerminalCharacterDecoder.cpp.orig
+++ qmltermwidget/lib/TerminalCharacterDecoder.cpp
@@ -21,6 +21,7 @@
 
 // Own
 #include "TerminalCharacterDecoder.h"
+#include <cwctype>
 
 // Qt
 #include <QTextStream>
