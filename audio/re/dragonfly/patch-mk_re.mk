--- mk/re.mk.intermediate	2016-06-24 12:04:28.000000000 +0300
+++ mk/re.mk
@@ -268,6 +268,16 @@ ifeq ($(OS),netbsd)
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
@@ -536,9 +546,11 @@ endif
 ifneq ($(HAVE_LIBRESOLV),)
 CFLAGS  += -DHAVE_LIBRESOLV
 ifneq ($(OS),freebsd)
+ifneq ($(OS),dragonfly)
 LIBS    += -lresolv
 endif
 endif
+endif
 ifneq ($(HAVE_SYSLOG),)
 CFLAGS  += -DHAVE_SYSLOG
 endif
