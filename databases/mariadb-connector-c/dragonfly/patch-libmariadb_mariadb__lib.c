--- libmariadb/mariadb_lib.c.orig	2017-07-19 09:31:02 UTC
+++ libmariadb/mariadb_lib.c
@@ -2663,7 +2663,7 @@ mysql_optionsv(MYSQL *mysql,enum mysql_o
   case MYSQL_READ_DEFAULT_GROUP:
     if (!arg1 || !((char *)arg1)[0])
     {
-#if defined(__APPLE__) || defined(__FreeBSD__)
+#if defined(__APPLE__) || defined(__FreeBSD__) || defined __DragonFly__
       const char * appname = getprogname();
 #elif defined(_GNU_SOURCE)
       const char * appname = program_invocation_short_name;
