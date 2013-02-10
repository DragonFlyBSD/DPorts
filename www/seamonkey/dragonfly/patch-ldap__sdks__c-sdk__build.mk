--- ldap/sdks/c-sdk/build.mk.orig	2012-11-30 04:12:50.000000000 +0100
+++ ldap/sdks/c-sdk/build.mk	2013-01-14 21:00:42.503203000 +0100
@@ -492,7 +492,7 @@
                         $(DLL_LDFLAGS) $(DLL_EXPORT_FLAGS) \
                         -o $@ $(SONAMEFLAG_PREFIX)$(notdir $@) $(OBJS)
 else # SONAMEFLAG_PREFIX
-LINK_DLL        = $(LD) $(DSO_LDOPTS) $(LDRPATHFLAG_PREFIX)$(RPATHFLAG) $(ALDFLAGS) \
+LINK_DLL        = $(CC_FOR_LINK) $(DSO_LDOPTS) $(LDRPATHFLAG_PREFIX)$(RPATHFLAG) $(ALDFLAGS) \
                         $(DLL_LDFLAGS) $(DLL_EXPORT_FLAGS) \
                         -o $@ $(OBJS)
 endif # SONAMEFLAG_PREFIX
