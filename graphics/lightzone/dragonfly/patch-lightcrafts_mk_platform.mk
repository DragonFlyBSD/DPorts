--- ../lightcrafts/mk/platform.mk.intermediate	2018-05-10 05:29:36.000000000 +0000
+++ ../lightcrafts/mk/platform.mk
@@ -272,7 +272,7 @@ endif
 ##
 # Linux, FreeBSD or OpenIndiana
 ##
-ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS))
+ifeq ($(PLATFORM),$(filter $(PLATFORM),Linux FreeBSD SunOS DragonFly))
   ifeq ($(PROCESSOR),x86_64)
     PLATFORM_CFLAGS+=	-march=athlon64 -mtune=generic $(SSE_FLAGS) -fPIC
   else ifeq ($(PROCESSOR),i386)
@@ -306,6 +306,13 @@ ifeq ($(PLATFORM),$(filter $(PLATFORM),L
     NUM_PROCESSORS:=	$(shell dmesg | grep '^cpu' | wc -l)
     PLATFORM_INCLUDES=	-I/usr/local/include
     PLATFORM_LDFLAGS=	-L/usr/local/lib
+  else ifeq ($(PLATFORM),DragonFly)
+    PKGCFG:=		pkgconf
+    JAVA_INCLUDES:=	-I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/freebsd
+    NUM_PROCESSORS:=	$(shell sysctl -n hw.ncpu)
+    PLATFORM_INCLUDES=	-I/usr/local/include
+    PLATFORM_LDFLAGS=	-L/usr/local/lib
+  else ifeq ($(PLATFORM),SunOS)
   else ifeq ($(PLATFORM),SunOS)
     JAVA_INCLUDES:=	-I$(JAVA_HOME)/include -I$(JAVA_HOME)/include/solaris
     NUM_PROCESSORS:=	$(shell psrinfo -p)
