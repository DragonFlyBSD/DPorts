The stupid blink generator blindly assumes bindings are always signed
integers but SHOW_ALL is unsigned.  Actually I do not think SHOW_ALL has
to be, so I will set this to the highest signed value to make chromium
build on gcc5.  There is a good chance this will work (maybe better than
it has been).  Let us see (surely Google will have to fix this though)

--- third_party/WebKit/Source/core/dom/NodeFilter.h.orig	2015-02-20 04:50:08 UTC
+++ third_party/WebKit/Source/core/dom/NodeFilter.h
@@ -52,7 +52,7 @@ public:
      * to the value of NodeType for the equivalent node type.
      */
     enum {
-        SHOW_ALL                       = 0xFFFFFFFF,
+        SHOW_ALL                       = 0x7FFFFFFF,
         SHOW_ELEMENT                   = 0x00000001,
         SHOW_ATTRIBUTE                 = 0x00000002,
         SHOW_TEXT                      = 0x00000004,
--- third_party/WebKit/Source/core/dom/NodeFilter.idl.orig	2015-02-20 04:50:08 UTC
+++ third_party/WebKit/Source/core/dom/NodeFilter.idl
@@ -28,7 +28,7 @@
     const short               FILTER_SKIP                    = 3;
 
     // Constants for whatToShow
-    const unsigned long       SHOW_ALL                       = 0xFFFFFFFF;
+    const unsigned long       SHOW_ALL                       = 0x7FFFFFFF;
     const unsigned long       SHOW_ELEMENT                   = 0x00000001;
     const unsigned long       SHOW_ATTRIBUTE                 = 0x00000002;
     const unsigned long       SHOW_TEXT                      = 0x00000004;
