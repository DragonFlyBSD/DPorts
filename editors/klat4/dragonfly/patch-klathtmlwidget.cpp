--- klathtmlwidget.cpp.orig	2008-10-15 14:20:33.000000000 +0000
+++ klathtmlwidget.cpp
@@ -73,7 +73,7 @@ bool KlatHTMLWidget::urlSelected(const Q
 			}
 			if(cURL.protocol() == LTRTOKLATPROT && found == true)
 			{
-				for (i ,found = false ; !found && i < len ; i++)
+				for (i=0,found=false ; !found && i < len ; i++)
 				{
 					if (code[i] == '}')
 					{
@@ -85,7 +85,9 @@ bool KlatHTMLWidget::urlSelected(const Q
 		}
 		
 		emit signalSymbolCodeSelected(code,advance);
+		return found;
 	}
+	return false;
 }
 
 void KlatHTMLWidget::openAppDataUrl(const QString &relpath)
