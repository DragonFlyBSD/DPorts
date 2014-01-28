
$FreeBSD: graphics/xmms-paranormal/files/patch-actuators.c 340725 2014-01-22 17:40:44Z mat $

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
