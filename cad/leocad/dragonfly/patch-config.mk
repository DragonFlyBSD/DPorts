--- config.mk.intermediate	2013-08-19 07:09:09.816388000 +0000
+++ config.mk
@@ -12,6 +12,11 @@ OSDIR := linux
 # (Add a -g for debugging)
 CPPFLAGS += -Wall
 
+ifeq ($(shell uname), DragonFly)
+CPPFLAGS += -I$(PREFIX)/include
+LDFLAGS  += -L$(PREFIX)/lib
+endif
+
 ### FreeBSD configuration
 
 ifeq ($(shell uname), FreeBSD)
