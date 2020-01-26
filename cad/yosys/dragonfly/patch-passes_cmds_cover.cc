--- passes/cmds/cover.cc.orig	2019-08-26 08:37:53 UTC
+++ passes/cmds/cover.cc
@@ -130,7 +130,7 @@ struct CoverPass : public Pass {
 			log("\n");
 		}
 
-#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__))
+#if defined(YOSYS_ENABLE_COVER) && (defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__))
 		for (auto &it : get_coverage_data()) {
 			if (!patterns.empty()) {
 				for (auto &p : patterns)
