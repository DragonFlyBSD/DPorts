--- qschematic/commands/item_remove.cpp.orig	2026-08-05 12:58:33 UTC
+++ qschematic/commands/item_remove.cpp
@@ -45,7 +45,7 @@
     // Is this a wire?
     if ( auto wire = std::dynamic_pointer_cast<Items::Wire>(_item) ) {
         auto oldNet = wire->net();
-        if (!std::ranges::contains(_scene->wire_manager()->nets(), oldNet))
+        if (!std::ranges::any_of(_scene->wire_manager()->nets(), [&](const auto& e) { return e == oldNet; }))
             _scene->wire_manager()->add_net(wire->net());
 
         wire->net()->addWire(wire);
