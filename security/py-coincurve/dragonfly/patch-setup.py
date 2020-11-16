--- setup.py.orig	2019-10-22 19:25:07 UTC
+++ setup.py
@@ -30,7 +30,7 @@ from setup_support import absolute, buil
 
 BUILDING_FOR_WINDOWS = detect_dll()
 
-MAKE = 'gmake' if platform.system() in ['FreeBSD', 'OpenBSD'] else 'make'
+MAKE = 'gmake' if platform.system() in ['DragonFly', 'FreeBSD', 'OpenBSD'] else 'make'
 
 # Version of libsecp256k1 to download if none exists in the `libsecp256k1` directory
 LIB_TARBALL_URL = 'https://github.com/bitcoin-core/secp256k1/archive/0d9540b13ffcd7cd44cc361b8744b93d88aa76ba.tar.gz'
