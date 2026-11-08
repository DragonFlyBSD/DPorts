--- src/version.h.orig	2026-06-16 08:45:19 UTC
+++ src/version.h
@@ -28,6 +28,7 @@
 #define G_VERSION_H
 
 #include <string>
+#include <tuple>
 
 namespace giada
 {
@@ -60,7 +61,7 @@
 	constexpr int getMinor() const { return m_minor; }
 	constexpr int getPatch() const { return m_patch; }
 
-	constexpr std::string toString() const
+	std::string toString() const
 	{
 		return std::to_string(m_major) + "." + std::to_string(m_minor) + "." + std::to_string(m_patch);
 	}
