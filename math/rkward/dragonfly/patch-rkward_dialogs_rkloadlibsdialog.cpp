--- rkward/dialogs/rkloadlibsdialog.cpp.intermediate	2013-03-09 11:04:45.138473000 +0000
+++ rkward/dialogs/rkloadlibsdialog.cpp
@@ -39,7 +39,7 @@
 
 #include "../debug.h"
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/types.h>
 #include <unistd.h>
 #include <pwd.h>
@@ -184,7 +184,7 @@ bool RKLoadLibsDialog::installPackages (
 		QTextStream stream (&file);
 		stream << "options (repos=" + repos_string + ")\n" + command_string;
 		if (as_root) {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 			struct passwd *passe = getpwuid(getuid ());
 			stream << QString ("system (\"chown ") + passe->pw_name + ' ' + QDir (RKSettingsModuleGeneral::filesPath ()).filePath ("package_archive") + "/*\")\n";
 #else
