--- klatexecsettingsdlgimpl.cpp.orig	2008-10-15 13:19:55.000000000 +0000
+++ klatexecsettingsdlgimpl.cpp
@@ -269,6 +269,7 @@ QVariant KlatExecConfigModel::data(const
 				return tmp.entry().command();
 			else if (index.column() == 3)
 				return tmp.entry().commandLine();
+			return QVariant();
 //			else if (index.column() == 4)
 //				return tmp.entry().shortcut().toString();
 		} 
@@ -292,6 +293,7 @@ QVariant KlatExecConfigModel::headerData
 		return QString(i18n("Command"));
 	else if(sect == 3)
 		return QString(i18n("Parameters"));
+	return QString("Invisible");
 //	else if(sect == 4)
 //		return QString("Shortcut");
 }
