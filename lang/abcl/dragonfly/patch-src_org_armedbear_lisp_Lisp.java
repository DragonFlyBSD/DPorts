--- src/org/armedbear/lisp/Lisp.java.orig	2013-06-22 11:00:03.000000000 +0000
+++ src/org/armedbear/lisp/Lisp.java
@@ -2364,6 +2364,10 @@ public final class Lisp
       featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
                                                    Keyword.DARWIN),
                                               featureList);
+    else if (osName.startsWith("DragonFly"))
+      featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
+                                                   Keyword.FREEBSD),
+                                              featureList);
     else if (osName.startsWith("FreeBSD"))
       featureList = Primitives.APPEND.execute(list(Keyword.UNIX,
                                                    Keyword.FREEBSD),
