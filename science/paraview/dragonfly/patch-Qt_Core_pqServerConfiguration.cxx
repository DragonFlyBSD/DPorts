--- Qt/Core/pqServerConfiguration.cxx.orig
+++ Qt/Core/pqServerConfiguration.cxx
@@ -214,7 +214,7 @@
 //-----------------------------------------------------------------------------
 QString pqServerConfiguration::termCommand()
 {
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
   // Based on i3 code
   // https://github.com/i3/i3/blob/next/i3-sensible-terminal
   QStringList termNames = { qgetenv("TERMINAL"), "x-terminal-emulator", "urxvt", "rxvt", "termit",
