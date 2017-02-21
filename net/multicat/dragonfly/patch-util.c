Missing patch bit.
--- util.c.intermediate	2017-02-21 15:55:42 UTC
+++ util.c
@@ -555,7 +555,7 @@ int OpenSocket( const char *_psz_arg, in
     in_addr_t i_raw_srcaddr = INADDR_ANY; 
     int i_raw_srcport = 0;
     char *psz_ifname = NULL;
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
     int hincl = 1;
 #endif
 
