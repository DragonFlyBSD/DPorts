Can be removed in FreeBSD 15

--- src/util/util.c.orig	2026-06-09 12:32:21 UTC
+++ src/util/util.c
@@ -832,8 +832,10 @@ errno_t sss_utc_to_time_t(const char *str, const char 
         return EINVAL;
     }
 
+#ifdef HAVE_TIMEZONE
     tzset();
     ut -= timezone;
+#endif
     *_unix_time = ut;
     return EOK;
 }
