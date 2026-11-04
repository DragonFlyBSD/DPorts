--- qschematic/wire_system/manager.cpp.orig	2026-08-05 12:58:33 UTC
+++ qschematic/wire_system/manager.cpp
@@ -243,7 +243,7 @@
         // Go through all the wires in the net
         for (const auto& otherWire: wire->net()->wires()) {
             // Ignore if the wire is already in the list
-            if (std::ranges::contains(connectedWires, otherWire))
+            if (std::ranges::any_of(connectedWires, [&](const auto& e) { return e == otherWire; }))
                 continue;
 
             // If they are connected to one of the wire in the list add them to the new list
@@ -293,7 +293,7 @@
         auto newNet = create_net();
         add_net(std::static_pointer_cast<wire_system::net>(newNet));
         for (auto wireToMove: net->wires()) {
-            if (std::ranges::contains(oldWires, wireToMove))
+            if (std::ranges::any_of(oldWires, [&](const auto& e) { return e == wireToMove; }))
                 continue;
 
             newNet->addWire(wireToMove);
