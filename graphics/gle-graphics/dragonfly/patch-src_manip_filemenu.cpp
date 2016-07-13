--- src/manip/filemenu.cpp.orig	2010-06-14 18:34:39.000000000 +0300
+++ src/manip/filemenu.cpp
@@ -404,10 +404,10 @@ void do_help(const char *k1, const char
         gotoxy(1,1);
 	wprintf("Manip help on topic {%s},  sub topic {%s}",k1,k2);
         scr_menubg();
-        hfile = fopen(gledir(hfilename),"r");
+        hfile = fopen(gledir(hfilename).c_str(),"r");
         if (hfile==NULL) {
 		gotoxy(1,3);
-		wprintf("Unable to open {%s} \n",gledir(hfilename));
+		wprintf("Unable to open {%s} \n",gledir(hfilename).c_str());
 		text_inkey();
 		return;
 	}
