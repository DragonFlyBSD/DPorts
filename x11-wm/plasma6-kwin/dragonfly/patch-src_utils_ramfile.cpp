--- src/utils/ramfile.cpp.orig	Tue Jul  2 09:13:02 2024
+++ src/utils/ramfile.cpp	Sat Mar
@@ -78,6 +78,8 @@ RamFile::RamFile(const char *name, const void *inData,
     m_tmp->unmap(data);
 #endif
 
+    // DragonFly BSD currently does not have support for fd sealing (see F_{ADD,GET}_SEAL
+#ifndef __DragonFly__
     int seals = F_SEAL_SHRINK | F_SEAL_GROW | F_SEAL_SEAL;
     if (flags.testFlag(RamFile::Flag::SealWrite)) {
         seals |= F_SEAL_WRITE;
@@ -86,6 +88,9 @@ RamFile::RamFile(const char *name, const void *inData,
     if (fcntl(fd(), F_ADD_SEALS, seals) != 0) {
         qCDebug(KWIN_CORE).nospace() << name << ": Failed to seal RamFile: " << strerror(errno);
     }
+#else
+        qCDebug(KWIN_CORE).nospace() << name << ": DragonFly BSD does not support sealing RamFile!";
+#endif
 
     guard.dismiss();
 }
@@ -136,14 +141,16 @@ bool RamFile::isValid() const
 RamFile::Flags RamFile::effectiveFlags() const
 {
     Flags flags = {};
-
+#ifndef __DragonFly__
     const int seals = fcntl(fd(), F_GET_SEALS);
     if (seals > 0) {
+
         if (seals & F_SEAL_WRITE) {
             flags.setFlag(Flag::SealWrite);
         }
-    }
 
+    }
+#endif
     return flags;
 }
 
