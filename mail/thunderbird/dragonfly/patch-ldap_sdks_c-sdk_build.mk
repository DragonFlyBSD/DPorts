--- ldap/sdks/c-sdk/build.mk.orig	2013-10-23 22:09:34.000000000 +0000
+++ ldap/sdks/c-sdk/build.mk
@@ -492,7 +492,7 @@ LINK_DLL        = $(LD) $(DSO_LDOPTS) $(
                         $(DLL_LDFLAGS) $(DLL_EXPORT_FLAGS) \
                         -o $@ $(SONAMEFLAG_PREFIX)$(notdir $@) $(OBJS)
 else # SONAMEFLAG_PREFIX
-LINK_DLL        = $(LD) $(DSO_LDOPTS) $(LDRPATHFLAG_PREFIX)$(RPATHFLAG) $(ALDFLAGS) \
+LINK_DLL        = $(CC_FOR_LINK) $(DSO_LDOPTS) $(LDRPATHFLAG_PREFIX)$(RPATHFLAG) $(ALDFLAGS) \
                         $(DLL_LDFLAGS) $(DLL_EXPORT_FLAGS) \
                         -o $@ $(OBJS)
 endif # SONAMEFLAG_PREFIX
