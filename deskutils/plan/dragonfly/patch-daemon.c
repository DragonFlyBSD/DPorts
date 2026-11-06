--- daemon.c.orig	2026-11-06 02:57:57 UTC
+++ daemon.c
@@ -503,7 +503,7 @@ static void reaper(
 	UNUSED int		sig)
 {
 	char			path[40];	/* script to delete */
-#if (defined BSD && !defined OSF && !defined __FreeBSD__)
+#if (defined BSD && !defined OSF && !defined __FreeBSD__ && !defined __DragonFly__)
 	union wait		dummy;
 #else
 	int			dummy;
