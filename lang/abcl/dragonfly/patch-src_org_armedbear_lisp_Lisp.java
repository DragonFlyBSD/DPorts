--- src/org/armedbear/lisp/Lisp.java.orig	2016-09-27 10:47:33 UTC
+++ src/org/armedbear/lisp/Lisp.java
@@ -2381,6 +2381,10 @@ public final class Lisp
       featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
                                                    Keyword.FREEBSD),
                                               featureList);
+    else if (osName.startsWith("DragonFly"))
+      featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
+                                                   Keyword.FREEBSD),
+                                              featureList);
     else if (osName.startsWith("OpenBSD"))
       featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
                                                    Keyword.OPENBSD),
