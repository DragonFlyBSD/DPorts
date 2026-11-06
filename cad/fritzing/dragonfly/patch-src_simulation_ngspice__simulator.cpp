--- src/simulation/ngspice_simulator.cpp.orig	2026-11-06 03:42:10 UTC
+++ src/simulation/ngspice_simulator.cpp
@@ -94,7 +94,7 @@ bool NgSpiceSimulator::init()
 				DebugDialog::debug("  " + path);
 			}
 		}
-#ifdef Q_OS_FREEBSD
+#if defined(Q_OS_FREEBSD) || defined(Q_OS_DRAGONFLY)
 		const QString libName = "libngspice.so";
 #elif defined Q_OS_MACOS
 		const QString libName = "libngspice.0.dylib";
