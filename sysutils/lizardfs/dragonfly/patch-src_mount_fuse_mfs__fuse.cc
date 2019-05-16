--- src/mount/fuse/mfs_fuse.cc.orig	2017-12-20 09:59:37 UTC
+++ src/mount/fuse/mfs_fuse.cc
@@ -48,11 +48,11 @@ void checkTypesEqual(const A& a, const B
 			"Types don't match");
 }
 
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/user.h>
 #endif
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <sys/sysctl.h>
 
 void getBsdGroups(LizardClient::Context &ctx) {
@@ -73,6 +73,12 @@ void getBsdGroups(LizardClient::Context
 		for (int i = 0; i < kinfo.kp_eproc.e_ucred.cr_ngroups; ++i) {
 			ctx.gids[i + 1] = kinfo.kp_eproc.e_ucred.cr_groups[i];
 		}
+#elif defined(__DragonFly__)
+		ctx.gids.resize(kinfo.kp_ngroups + 1);
+		ctx.gids[0] = ctx.gid;
+		for (int i = 0; i < kinfo.kp_ngroups; ++i) {
+			ctx.gids[i + 1] = kinfo.kp_groups[i];
+		}
 #else
 		ctx.gids.resize(kinfo.ki_ngroups + 1);
 		ctx.gids[0] = ctx.gid;
@@ -88,7 +94,7 @@ static void updateGroupsForContext(fuse_
 	static_assert(sizeof(gid_t) == sizeof(LizardClient::Context::IdType),
 	              "Invalid IdType to call fuse_req_getgroups");
 
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined(__DragonFly__)
 	(void)req;
 	getBsdGroups(ctx);
 	LizardClient::updateGroups(ctx);
