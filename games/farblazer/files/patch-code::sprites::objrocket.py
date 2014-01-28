
$FreeBSD: games/farblazer/files/patch-code::sprites::objrocket.py 340725 2014-01-22 17:40:44Z mat $

--- code/sprites/objrocket.py	2002/05/10 00:24:42	1.1
+++ code/sprites/objrocket.py	2002/05/10 00:24:53
@@ -6,7 +6,6 @@
 import random
 import pygame
 from pygame.locals import *
-from pygame.UserRect import UserRect
 import game, gfx
 
 from baseairobj import AirObj
