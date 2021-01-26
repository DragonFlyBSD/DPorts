--- buildconfig/config_unix.py.orig	2021-01-25 23:19:21.471385000 +0100
+++ buildconfig/config_unix.py	2021-01-25 23:21:17.911681000 +0100
@@ -211,7 +211,7 @@
         Dependency('SCRAP', '', 'libX11', ['X11']),
         #Dependency('GFX', 'SDL_gfxPrimitives.h', 'libSDL_gfx.so', ['SDL_gfx']),
     ])
-    is_freebsd = 'FreeBSD' in platform.system()
+    is_freebsd = (platform.system() == 'FreeBSD' or platform.system() == 'DragonFly')
     is_hurd = platform.system() == 'GNU'
     if not is_freebsd and not is_hurd:
         porttime_dep = get_porttime_dep()
