--- mk/re.mk.intermediate	2016-12-07 17:09:47 UTC
+++ mk/re.mk
@@ -269,6 +269,16 @@ ifeq ($(OS),netbsd)
 	AFLAGS		:= cru
 	HAVE_KQUEUE	:= 1
 endif
+ifeq ($(OS),dragonfly)
+	CFLAGS		+= -fPIC -DDRAGONFLY
+	LFLAGS		+= -fPIC
+	SH_LFLAGS	+= -shared
+	MOD_LFLAGS	+=
+	APP_LFLAGS	+= -rdynamic
+	AR		:= ar
+	AFLAGS		:= cru
+	HAVE_KQUEUE	:= 1
+endif
 ifeq ($(OS),freebsd)
 	CFLAGS		+= -fPIC -DFREEBSD
 	LFLAGS		+= -fPIC
