--- tools/common.c.orig	2015-12-27 22:25:23.000000000 +0200
+++ tools/common.c
@@ -309,6 +309,9 @@ static int _request_call_hangup(Phone *
 	return ret;
 }
 
+#ifdef __DragonFly__
+#undef SIOCGIFDATA
+#endif
 
 /* helper_trigger */
 static int _trigger_connection(Phone * phone, ModemEventType type);
