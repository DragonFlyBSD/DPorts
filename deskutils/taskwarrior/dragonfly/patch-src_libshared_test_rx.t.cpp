--- src/libshared/test/rx.t.cpp.orig	2021-10-19 03:51:30 UTC
+++ src/libshared/test/rx.t.cpp
@@ -83,7 +83,7 @@ int main (int, char**)
   ut.ok (r9.match (start, end, text),        "e there are matches");
   ut.is (start.size (), (size_t) 6,          "e == 6 matches");
 
-#if defined(DARWIN) || defined(CYGWIN) || defined(FREEBSD) || defined(OPENBSD)
+#if defined(DARWIN) || defined(CYGWIN) || defined(FREEBSD) || defined(OPENBSD) || defined(__DragonFly__)
   text = "this is the end.";
   ut.pass (text + " =~ /\\bthe/");
   ut.pass (text + " =~ /the\\b/");
