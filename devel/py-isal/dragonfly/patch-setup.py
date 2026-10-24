--- setup.py.orig
+++ setup.py
@@ -21,6 +21,7 @@
 ISA_L_SOURCE = os.path.join("src", "isal", "isa-l")
 
 SYSTEM_IS_BSD = (sys.platform.startswith("freebsd") or
+                 sys.platform.startswith("dragonfly") or
                  sys.platform.startswith("netbsd"))
 SYSTEM_IS_UNIX = (sys.platform.startswith("linux") or
                   sys.platform.startswith("darwin") or
