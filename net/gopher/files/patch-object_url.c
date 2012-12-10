
$FreeBSD: ports/net/gopher/files/patch-object_url.c,v 1.2 2012/11/17 06:00:01 svnexp Exp $

--- object/url.c.orig	Sun Aug 22 15:54:02 2004
+++ object/url.c	Sun Aug 22 15:54:25 2004
@@ -362,7 +362,8 @@
           case ftp:
           case unset:
           case unknown:
-	  }
+	  break; 
+	}
 	  URLsetHost(url, cp);
      }
 
