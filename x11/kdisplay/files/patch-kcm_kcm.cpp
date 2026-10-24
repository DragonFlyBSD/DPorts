--- kcm/kcm.cpp.orig	2024-10-09 19:15:52 UTC
+++ kcm/kcm.cpp
@@ -34,6 +34,7 @@ along with this program.  If not, see <http://www.gnu.
 
 #include <QProcess>
 #include <QTimer>
+#include <QQmlEngine>
 
 K_PLUGIN_CLASS_WITH_JSON(KCMKDisplay, "kcm_kdisplay.json")
 
