--- qtoctave/src/generate_menu.cpp.orig	2011-01-06 21:48:07.000000000 +0000
+++ qtoctave/src/generate_menu.cpp
@@ -279,7 +279,7 @@ bool GenerateMenu::process_menu_file(QSt
 MenuExtCallBack *GenerateMenu::process_menu_file(QString _file)
 {
 	QFile file(_file);
-	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return false;
+	if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) return NULL;
 	
 	QString label;
 	MenuExtCallBack *wizard=new MenuExtCallBack();
