--- src/agentbase/agentbase.h.orig	2026-10-05 04:11:52 UTC
+++ src/agentbase/agentbase.h
@@ -446,7 +446,7 @@ class AKONADIAGENTBASE_EXPORT AgentBase : public QObje
     static int initCore(int argc, char **argv)
     {
 #if __has_include(<QApplication>)
-        static_assert(false, "This links to QWidgets");
+        static_assert(sizeof(T) == 0, "This links to QWidgets");
 #endif
 
         QCoreApplication app(argc, argv);
