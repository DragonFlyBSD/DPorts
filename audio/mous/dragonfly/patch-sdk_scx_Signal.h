--- sdk/scx/Signal.h.orig	2018-04-02 13:44:48 UTC
+++ sdk/scx/Signal.h
@@ -1,5 +1,6 @@
 #pragma once
 
+#include <algorithm> // for std::remove_if
 #include <cinttypes>
 #include <memory>
 #include <utility>
