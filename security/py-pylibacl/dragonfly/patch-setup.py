--- setup.py.orig	2014-05-23 22:37:47 UTC
+++ setup.py
@@ -16,7 +16,7 @@ elif u_sysname == "GNU/kFreeBSD":
     macros.append(("HAVE_LEVEL2", None))
     macros.append(("HAVE_ACL_COPY_EXT", None))
     libs.append("acl")
-elif u_sysname == "FreeBSD":
+elif u_sysname == "FreeBSD" or u_sysname == "DragonFly":
     macros.append(("HAVE_FREEBSD", None))
     if u_release.startswith("7."):
         macros.append(("HAVE_LEVEL2", None))
