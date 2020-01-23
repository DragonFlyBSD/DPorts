--- doas.c.orig	2019-12-28 02:16:17 UTC
+++ doas.c
@@ -199,7 +199,7 @@ checkconfig(const char *confpath, int ar
 	struct rule *rule;
         int status;
 
-	#if defined(__linux__) || defined(__FreeBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	status = setresuid(uid, uid, uid);
 	#else
 	status = setreuid(uid, uid);
@@ -518,7 +518,7 @@ main(int argc, char **argv)
 	    LOGIN_SETUSER) != 0)
 		errx(1, "failed to set user context for target");
 #else
-	#if defined(__linux__) || defined(__FreeBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	if (setresgid(target_pw->pw_gid, target_pw->pw_gid, target_pw->pw_gid) == -1)
 		err(1, "setresgid");
 	#else
@@ -527,7 +527,7 @@ main(int argc, char **argv)
 	#endif
 	if (initgroups(target_pw->pw_name, target_pw->pw_gid) == -1)
 		err(1, "initgroups");
-	#if defined(__linux__) || defined(__FreeBSD__)
+	#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	if (setresuid(target, target, target) == -1)
 		err(1, "setresuid");
 	#else
