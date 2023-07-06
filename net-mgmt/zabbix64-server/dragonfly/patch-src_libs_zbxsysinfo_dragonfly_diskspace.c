--- src/libs/zbxsysinfo/dragonfly/diskspace.c.orig	2023-07-06 22:00:54 UTC
+++ src/libs/zbxsysinfo/dragonfly/diskspace.c
@@ -42,7 +42,6 @@ static zbx_mntopt_t mntopts[] = {
 	{MNT_QUOTA,		"with quotas"},
 	{MNT_RDONLY,		"read-only"},
 	{MNT_SYNCHRONOUS,	"synchronous"},
-	{MNT_UNION,		"union"},
 	{MNT_NOCLUSTERR,	"noclusterr"},
 	{MNT_NOCLUSTERW,	"noclusterw"},
 	{MNT_SUIDDIR,		"suiddir"},
@@ -50,8 +49,6 @@ static zbx_mntopt_t mntopts[] = {
 #if defined(MNT_SUJ)
 	{MNT_SUJ,		"journaled soft-updates"},
 #endif
-	{MNT_MULTILABEL,	"multilabel"},
-	{MNT_ACLS,		"acls"},
 #if defined(MNT_NFS4ACLS)
 	{MNT_NFS4ACLS,		"nfsv4acls"},
 #endif
