--- src/applets/network.c.orig	2016-01-12 03:32:16.000000000 +0200
+++ src/applets/network.c
@@ -294,7 +294,7 @@ static void _refresh_interface_flags(Net
 {
 	gboolean active = TRUE;
 	char const * icon = "network-offline";
-#ifdef SIOCGIFDATA
+#if defined(SIOCGIFDATA) && !defined(__DragonFly__)
 	struct ifdatareq ifdr;
 # if GTK_CHECK_VERSION(2, 12, 0)
 	unsigned long ibytes;
@@ -309,7 +309,7 @@ static void _refresh_interface_flags(Net
 	else
 #endif
 	{
-#ifdef SIOCGIFDATA
+#if defined(SIOCGIFDATA) && !defined(__DragonFly__)
 		/* XXX ignore errors */
 		memset(&ifdr, 0, sizeof(ifdr));
 		strncpy(ifdr.ifdr_name, ni->name, sizeof(ifdr.ifdr_name));
