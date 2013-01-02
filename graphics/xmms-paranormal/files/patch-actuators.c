
$FreeBSD: ports/graphics/xmms-paranormal/files/patch-actuators.c,v 1.2 2012/11/17 05:58:26 svnexp Exp $

--- actuators.c.orig	Sun Aug 22 17:55:01 2004
+++ actuators.c	Sun Aug 22 17:56:02 2004
@@ -45,7 +45,8 @@
 		      sizeof (union actuator_option_val));
 	      break;
 	    case OPT_TYPE_STRING:
-	    }
+	    break;
+		}
 	}
 
       /* the NULL option */
