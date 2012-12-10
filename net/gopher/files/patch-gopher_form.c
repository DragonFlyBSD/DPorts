
$FreeBSD: ports/net/gopher/files/patch-gopher_form.c,v 1.2 2012/11/17 06:00:01 svnexp Exp $

--- gopher/form.c.orig	Sun Aug 22 15:55:22 2004
+++ gopher/form.c	Sun Aug 22 15:55:36 2004
@@ -288,7 +288,8 @@
                case ITEM_UNINIT: /* Unhandled cases... */
                case ITEM_LABEL:
                case ITEM_FILENAME:
-	       }
+	       break;
+		}
 	  }
 	  responses[respnum++] = NULL;
      }
