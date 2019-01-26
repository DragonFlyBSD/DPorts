--- FvwmCompositor/desktop/MetisseDesktop.cxx.orig	2008-08-25 13:54:44.000000000 +0000
+++ FvwmCompositor/desktop/MetisseDesktop.cxx
@@ -1108,7 +1108,7 @@ MetisseDesktop::MetisseDesktop(
 
 MetisseDesktop::MetisseDesktop(std::string rfburi)
 {
-	MetisseDesktop(rfburi, "foldable", false, false);
+	MetisseDesktop(rfburi, "foldable", false, NULL);
 }
 
 // --------------------------------------------------------------------------
