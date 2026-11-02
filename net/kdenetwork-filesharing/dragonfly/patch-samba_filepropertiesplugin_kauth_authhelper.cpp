--- samba/filepropertiesplugin/kauth/authhelper.cpp.orig
+++ samba/filepropertiesplugin/kauth/authhelper.cpp
@@ -180,7 +180,7 @@
     }
 
     QProcess p;
-#if defined(Q_OS_FREEBSD)
+#if defined(Q_OS_FREEBSD) || defined(__DragonFly__)
     p.setProgram(QStringLiteral("pw"));
     p.setArguments(
         {QStringLiteral("group"), QStringLiteral("mod"), QStringLiteral("{%1}").arg(group), QStringLiteral("-m"), QStringLiteral("{%1}").arg(user.value())});
