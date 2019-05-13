--- setup.py.intermediate	2019-05-13 09:17:58.000000000 +0000
+++ setup.py
@@ -26,7 +26,7 @@ if __name__=='__main__': #NO RUNTESTS
 	elif sys.platform=="aix4":
 		LIBS=['nsl_r', 'dl']
 	elif sys.platform in ("freebsd4", "darwin", "mac", "linux2") \
-		or sys.platform.startswith("freebsd"):
+		or sys.platform.startswith("freebsd") or sys.platform.startswith("dragonfly"):
 		LIBS=[]
 	else:
 		msg = "Don't know about system %s" % sys.platform
