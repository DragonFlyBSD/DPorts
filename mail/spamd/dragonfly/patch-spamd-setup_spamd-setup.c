--- spamd-setup/spamd-setup.c.orig	2010-10-30 22:08:20.000000000 +0000
+++ spamd-setup/spamd-setup.c
@@ -52,7 +52,7 @@ int 		  ipfw_tabno = 2;
 #endif
 
 #define PATH_FTP		"/usr/bin/ftp"
-#define PATH_PFCTL		"/sbin/pfctl"
+#define PATH_PFCTL		"/usr/sbin/pfctl"
 #ifndef PATH_SPAMD_CONF
 #define PATH_SPAMD_CONF		"/usr/local/etc/spamd/spamd.conf"
 #endif
@@ -98,7 +98,7 @@ int		 configure_spamd(u_short, char *, c
 int		 configure_pf(struct cidr *);
 int		 getlist(char **, char *, struct blacklist *, struct blacklist *);
 __dead void	 usage(void);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 int		  configure_ipfw(struct cidr *);
 #endif
 
