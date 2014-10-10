--- mk/network.mk.orig	2005-01-24 07:45:13 UTC
+++ mk/network.mk
@@ -121,10 +121,6 @@
 CFLAGS += -Dnfds_t='unsigned int'
 endif # CYGWIN
 
-ifeq (${HOST_OS}, DragonFly)
-CFLAGS += -Dnfds_t='unsigned int'
-endif # DragonFly
-
 ifeq (${HOST_OS}, FreeBSD)
 ifeq ($(shell ${TEST} ${OSVER} -lt 500000 && ${ECHO} yes), yes) # 5.0-RELEASE
 CFLAGS += -Dnfds_t='unsigned int'
