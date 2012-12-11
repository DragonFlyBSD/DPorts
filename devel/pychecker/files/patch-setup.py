
$FreeBSD: ports/devel/pychecker/files/patch-setup.py,v 1.3 2012/11/17 05:56:54 svnexp Exp $

--- setup.py
+++ setup.py
@@ -187,7 +187,6 @@
         'url'              : "http://pychecker.sourceforge.net/",
         'packages'         : [ 'pychecker', ],
         'scripts'          : [ "pychecker" ],   # note: will be replaced by customized action
-        'data_files'       : [ ( "pychecker", DATA_FILES, ) ], 
         'long_description' : LONG_DESCRIPTION,
         'cmdclass'         : CUSTOMIZED_ACTIONS, 
       }
