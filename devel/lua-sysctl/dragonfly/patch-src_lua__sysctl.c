--- src/lua_sysctl.c.orig	2016-12-23 20:56:25 UTC
+++ src/lua_sysctl.c
@@ -266,10 +266,12 @@ luaA_sysctl_set(lua_State *L)
 	if ((kind & CTLTYPE) == CTLTYPE_NODE)
 		return (luaL_error(L, "oid '%s' isn't a leaf node", bufp));
 	if (!(kind & CTLFLAG_WR)) {
+#ifndef __DragonFly__
 		if (kind & CTLFLAG_TUN)
 			return (luaL_error(L, "oid '%s' is a read only tunable. "
 					"Tunable values are set in /boot/loader.conf", bufp));
 		else
+#endif
 			return (luaL_error(L, "oid '%s' is read only", bufp));
 	}
 
