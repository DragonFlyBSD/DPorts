
$FreeBSD: ports/graphics/xmms-paranormal/files/patch-paranormal.c,v 1.2 2012/11/17 05:58:26 svnexp Exp $

--- paranormal.c.orig	Sun Aug 22 17:56:22 2004
+++ paranormal.c	Sun Aug 22 17:56:36 2004
@@ -167,7 +167,7 @@
 	    case SDLK_BACKQUOTE:
 	      take_screenshot ();
 	      break;
-	    default:
+	    default: break;
 	    }
 	  break;
 	case SDL_VIDEORESIZE:
