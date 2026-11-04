--- qschematic/commands/item_add.cpp.orig	2026-08-05 12:58:33 UTC
+++ qschematic/commands/item_add.cpp
@@ -58,7 +58,7 @@
     auto wire = std::dynamic_pointer_cast<Items::Wire>(_item);
     if (wire) {
         if (wire->net()) {
-            if (!std::ranges::contains(_scene->wire_manager()->nets(), wire->net()))
+            if (!std::ranges::any_of(_scene->wire_manager()->nets(), [&](const auto& e) { return e == wire->net(); }))
                 _scene->wire_manager()->add_net(wire->net());
 
             wire->net()->addWire(wire);
