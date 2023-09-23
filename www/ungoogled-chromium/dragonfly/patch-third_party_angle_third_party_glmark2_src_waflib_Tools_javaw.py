diff --git third_party/angle/third_party/glmark2/src/waflib/Tools/javaw.py third_party/angle/third_party/glmark2/src/waflib/Tools/javaw.py
index a07c7c5d618..f95df5bd273 100644
--- third_party/angle/third_party/glmark2/src/waflib/Tools/javaw.py
+++ third_party/angle/third_party/glmark2/src/waflib/Tools/javaw.py
@@ -285,6 +285,8 @@ def check_jni_headers(conf):
 		libDirs=[[x,y.parent.abspath()]for x in libDirs for y in f]
 	if conf.env.DEST_OS=='freebsd':
 		conf.env.append_unique('LINKFLAGS_JAVA','-pthread')
+	if conf.env.DEST_OS=='dragonfly':
+		conf.env.append_unique('LINKFLAGS_JAVA','-pthread')
 	for d in libDirs:
 		try:
 			conf.check(header_name='jni.h',define_name='HAVE_JNI_H',lib='jvm',libpath=d,includes=incDirs,uselib_store='JAVA',uselib='JAVA')
