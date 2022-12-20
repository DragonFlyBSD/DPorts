--- doas.c.orig	2022-11-07 10:02:51.593896000 +0100
+++ doas.c	2022-11-07 10:03:37.692875000 +0100
@@ -200,7 +200,7 @@
 	struct rule *rule;
         int status;
 
-	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 	status = setresuid(uid, uid, uid);
 	#else
 	status = setreuid(uid, uid);
@@ -536,7 +536,7 @@
             LOGIN_SETUSER) != 0)
             errx(1, "failed to set user context for target");
 #else
-	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 	if (setresgid(target_pw->pw_gid, target_pw->pw_gid, target_pw->pw_gid) == -1)
 		err(1, "setresgid");
 	#else
@@ -545,7 +545,7 @@
 	#endif
 	if (initgroups(target_pw->pw_name, target_pw->pw_gid) == -1)
 		err(1, "initgroups");
-	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__MidnightBSD__) || defined(__DragonFly__)
 	if (setresuid(target, target, target) == -1)
 		err(1, "setresuid");
 	#else
