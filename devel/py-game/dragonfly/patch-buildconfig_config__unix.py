--- buildconfig/config_unix.py.orig	2019-03-29 08:24:30 UTC
+++ buildconfig/config_unix.py
@@ -221,7 +221,7 @@ def main(sdl2=False):
         Dependency('SCRAP', '', 'libX11', ['X11']),
         #Dependency('GFX', 'SDL_gfxPrimitives.h', 'libSDL_gfx.so', ['SDL_gfx']),
     ])
-    is_freebsd = platform.system() == 'FreeBSD'
+    is_freebsd = (platform.system() == 'FreeBSD' or platform.system() == 'DragonFly')
     if not is_freebsd:
         porttime_dep = get_porttime_dep()
         DEPS.append(
