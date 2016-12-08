The stupid blink generator blindly assumes bindings are always signed
integers but SHOW_ALL is unsigned.  Actually I do not think SHOW_ALL has
to be, so I will set this to the highest signed value to make chromium
build on gcc5.  There is a good chance this will work (maybe better than
it has been).  Let us see (surely Google will have to fix this though)

--- third_party/WebKit/Source/core/dom/NodeFilter.h	2016-11-29 15:10:34.000000000 +0200
+++ third_party/WebKit/Source/core/dom/NodeFilter.h
@@ -51,7 +51,7 @@ public:
      * to the value of NodeType for the equivalent node type.
      */
     enum {
-        kShowAll                       = 0xFFFFFFFF,
+        kShowAll                       = 0x7FFFFFFF,
         kShowElement                   = 0x00000001,
         kShowAttribute                 = 0x00000002,
         kShowText                      = 0x00000004,
--- third_party/WebKit/Source/core/dom/NodeFilter.idl	2016-11-10 22:02:26.000000000 +0200
+++ third_party/WebKit/Source/core/dom/NodeFilter.idl
@@ -30,7 +30,7 @@
     const unsigned short FILTER_SKIP = 3;
 
     // Constants for whatToShow
-    const unsigned long SHOW_ALL = 0xFFFFFFFF;
+    const unsigned long SHOW_ALL = 0x7FFFFFFF;
     const unsigned long SHOW_ELEMENT = 0x1;
     const unsigned long SHOW_ATTRIBUTE = 0x2; // historical
     const unsigned long SHOW_TEXT = 0x4;
