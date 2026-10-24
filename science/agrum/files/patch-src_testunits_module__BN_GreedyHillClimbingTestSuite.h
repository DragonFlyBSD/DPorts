-- Fix out-of-bounds vector access in the GreedyHillClimbing test helper.
-- The rank vector was sized to total_order.size(), but node IDs used as
-- indices can be as large as nb_vars - 1. With libc++ hardening this
-- triggered a SIGILL (ud2) trap, crashing the _K2_asia test case.
--
-- Upstream: https://gitlab.com/agrumery/aGrUM
--
--- src/testunits/module_BN/GreedyHillClimbingTestSuite.h.orig	2026-09-05 18:56:31 UTC
+++ src/testunits/module_BN/GreedyHillClimbingTestSuite.h
@@ -124,7 +124,7 @@ namespace gum_tests {
 
       std::vector< int > rank;
       if (!total_order.empty()) {
-        rank.resize(total_order.size());
+        rank.resize(nb_vars);
         int i = 0;
         for (const auto node: total_order) {
           rank[node] = i++;
