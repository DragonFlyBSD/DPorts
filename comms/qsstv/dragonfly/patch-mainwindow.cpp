--- mainwindow.cpp.orig	2019-04-18 09:26:35 UTC
+++ mainwindow.cpp
@@ -24,7 +24,9 @@
 #include "utils/logging.h"
 #include "dispatch/dispatcher.h"
 #include "ui_mainwindow.h"
+#ifndef __DragonFly__
 #include "soundpulse.h"
+#endif
 #include "soundalsa.h"
 #include "configdialog.h"
 #include "configparams.h"
@@ -111,7 +113,11 @@ mainWindow::mainWindow(QWidget *parent)
   txWidgetPtr=ui->txWindow;
   galleryWidgetPtr=ui->galleryWindow;
   readSettings();
+#ifdef __DragonFly__
+  if(false) ;
+#else
   if(pulseSelected) soundIOPtr=new soundPulse;
+#endif
   else  soundIOPtr=new soundAlsa;
 
   //  setupFtp(notifyRXIntfPtr,"FtpNotificationRx");
@@ -230,7 +236,11 @@ void mainWindow::restartSound(bool inSta
       delete soundIOPtr;
       soundIOPtr=NULL;
     }
+#ifdef __DragonFly__
+  if(false) ;
+#else
   if(pulseSelected) soundIOPtr=new soundPulse;
+#endif
   else soundIOPtr=new soundAlsa;
   if(!soundIOPtr->init(BASESAMPLERATE))
     {
