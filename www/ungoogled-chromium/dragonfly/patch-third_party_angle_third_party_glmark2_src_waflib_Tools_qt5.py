diff --git third_party/angle/third_party/glmark2/src/waflib/Tools/qt5.py third_party/angle/third_party/glmark2/src/waflib/Tools/qt5.py
index 4cac93260e0..7b095117b19 100644
--- third_party/angle/third_party/glmark2/src/waflib/Tools/qt5.py
+++ third_party/angle/third_party/glmark2/src/waflib/Tools/qt5.py
@@ -281,6 +281,12 @@ def configure(self):
 			self.check(features='qt5 cxx cxxprogram',use=uses,fragment=frag,msg='Can we link Qt programs on FreeBSD directly?')
 		except self.errors.ConfigurationError:
 			self.check(features='qt5 cxx cxxprogram',use=uses,uselib_store='qt5',libpath='/usr/local/lib',fragment=frag,msg='Is /usr/local/lib required?')
+	if Utils.unversioned_sys_platform()=='dragonfly':
+		frag='#include <QApplication>\nint main(int argc, char **argv) { QApplication app(argc, argv); return NULL != (void*) (&app);}\n'
+		try:
+			self.check(features='qt5 cxx cxxprogram',use=uses,fragment=frag,msg='Can we link Qt programs on DragonFly directly?')
+		except self.errors.ConfigurationError:
+			self.check(features='qt5 cxx cxxprogram',use=uses,uselib_store='qt5',libpath='/usr/local/lib',fragment=frag,msg='Is /usr/local/lib required?')
 @conf
 def find_qt5_binaries(self):
 	env=self.env
