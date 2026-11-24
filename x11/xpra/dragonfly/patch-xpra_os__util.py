--- xpra/os_util.py.orig
+++ xpra/os_util.py
@@ -21,6 +21,7 @@
 NETBSD: bool = sys.platform.startswith("netbsd")
 OPENBSD: bool = sys.platform.startswith("openbsd")
 FREEBSD: bool = sys.platform.startswith("freebsd")
+DRAGONFLY: bool = sys.platform.startswith("dragonfly")
 POSIX: bool = os.name == "posix"
 BITS: int = struct.calcsize(b"P")*8
 
