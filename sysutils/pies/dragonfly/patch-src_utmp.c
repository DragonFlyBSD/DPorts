--- src/utmp.c.orig	2019-05-23 10:19:15 UTC
+++ src/utmp.c
@@ -30,6 +30,12 @@ typedef struct utmpx UTMPX;
 # define UTMP_FILE UTMPX_FILE
 # undef WTMP_FILE
 # define WTMP_FILE WTMPX_FILE
+# ifndef WTMPX_FILE
+#  define WTMPX_FILE _PATH_WTMPX
+# endif
+# ifndef UTMPX_FILE
+#  define UTMPX_FILE _PATH_UTMPX
+# endif
 # if defined HAVE_STRUCT_UTMPX_UT_NAME
 #  define UT_NAME(u) ((u)->ut_name)
 # elif defined HAVE_STRUCT_UTMPX_UT_USER
