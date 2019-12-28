--- libradius/radlib.c.orig	2005-07-05 18:35:32 UTC
+++ libradius/radlib.c
@@ -59,7 +59,7 @@ static int	 put_raw_attr(struct xrad_han
 		    const void *, size_t);
 static int	 split(char *, char *[], int, char *, size_t);
 
-#if !defined(__FreeBSD__) && !defined(__linux__)
+#if !defined(__FreeBSD__) && !defined(__linux__) && !defined(__DragonFly__)
 static char *strsep(char **stringp, const char *delim)
 {
     char *s;
@@ -329,7 +329,7 @@ xrad_add_server(struct xrad_handle *h, c
 	srvp = &h->servers[h->num_servers];
 
 	memset(&srvp->addr, 0, sizeof srvp->addr);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	srvp->addr.sin_len = sizeof srvp->addr;
 #endif
 	srvp->addr.sin_family = AF_INET;
@@ -703,7 +703,7 @@ xrad_init_send_request(struct xrad_handl
 			return -1;
 		}
 		memset(&sin, 0, sizeof sin);
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		sin.sin_len = sizeof sin;
 #endif
 		sin.sin_family = AF_INET;
@@ -776,7 +776,7 @@ xrad_auth_open(void)
 
 	h = (struct xrad_handle *)malloc(sizeof(struct xrad_handle));
 	if (h != NULL) {
-#if defined(__FreeBSD__)
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		srandomdev();
 #else
 		srand(243);
