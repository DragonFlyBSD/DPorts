--- waflib/Tools/c_config.py.ori	2021-10-23 18:53:50.811381000 +0200
+++ waflib/Tools/c_config.py	2021-10-23 18:54:14.030856000 +0200
@@ -29,6 +29,7 @@
 MACRO_TO_DESTOS = {
 '__linux__'                                      : 'linux',
 '__GNU__'                                        : 'gnu', # hurd
+'__DragonFly__'                                  : 'dragonfly',
 '__FreeBSD__'                                    : 'freebsd',
 '__NetBSD__'                                     : 'netbsd',
 '__OpenBSD__'                                    : 'openbsd',
