--- hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/security/JniBasedUnixGroupsNetgroupMapping.c.orig	2016-01-26 00:07:35 UTC
+++ hadoop-common-project/hadoop-common/src/main/native/src/org/apache/hadoop/security/JniBasedUnixGroupsNetgroupMapping.c
@@ -73,7 +73,7 @@ Java_org_apache_hadoop_security_JniBased
   // was successful or not (as long as it was called we need to call
   // endnetgrent)
   setnetgrentCalledFlag = 1;
-#if defined(__FreeBSD__) || defined(__MACH__)
+#if defined(__FreeBSD__) || defined(__MACH__) || defined __DragonFly__
   setnetgrent(cgroup);
   {
 #else
