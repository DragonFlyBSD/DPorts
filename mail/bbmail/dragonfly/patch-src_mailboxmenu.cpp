--- src/mailboxmenu.cpp.intermediate	2016-09-02 14:09:50 UTC
+++ src/mailboxmenu.cpp
@@ -20,6 +20,7 @@
 //
 //
 #include "mailboxmenu.h"
+#include <cstdio> // sprintf
 #include <cstdlib>
 
 MailboxMenu::MailboxMenu(ToolWindow *toolwindow) :
