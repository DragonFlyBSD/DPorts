diff --git third_party/swiftshader/src/System/Configurator.cpp third_party/swiftshader/src/System/Configurator.cpp
index 62a9b7eef36..fb34f5da1bd 100644
--- third_party/swiftshader/src/System/Configurator.cpp
+++ third_party/swiftshader/src/System/Configurator.cpp
@@ -38,7 +38,7 @@ namespace sw {
 
 Configurator::Configurator(const std::string &filePath)
 {
-#if defined(__OpenBSD__) || defined(__FreeBSD__)
+#if defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	return;
 #endif
 	std::fstream file(filePath, std::ios::in);
