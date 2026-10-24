--- target.make.orig	2025-02-10 15:22:04 UTC
+++ target.make
@@ -659,16 +659,33 @@
 # DragonFly
 #
 ifeq ($(findstring dragonfly, $(GNUSTEP_TARGET_OS)), dragonfly)
-HAVE_SHARED_LIBS    = yes
-SHARED_LD_POSTFLAGS = -Wl,-R/usr/pkg/lib -L/usr/pkg/lib
+# Same as FreeBSD ELF: soname lib*.so.MAJOR and the .so.MAJOR link.
+HAVE_SHARED_LIBS	= yes
 SHARED_LIB_LINK_CMD = \
-	$(LD) -shared -Wl,-soname,$(LIB_LINK_VERSION_FILE) \
-              $(ALL_LDFLAGS) -o $(LIB_LINK_OBJ_DIR)/$(LIB_LINK_VERSION_FILE) \
-                 $^ $(INTERNAL_LIBRARIES_DEPEND_UPON) \
-                 $(SHARED_LD_POSTFLAGS) \
+	$(LD) -shared -Wl,-soname,$(LIB_LINK_SONAME_FILE) \
+	   $(ALL_LDFLAGS) -o $(LIB_LINK_OBJ_DIR)/$(LIB_LINK_VERSION_FILE) $^ \
+	   $(INTERNAL_LIBRARIES_DEPEND_UPON) \
+	   $(SHARED_LD_POSTFLAGS) \
 	&& (cd $(LIB_LINK_OBJ_DIR); \
 	  $(RM_LN_S) $(LIB_LINK_FILE); \
-	  $(LN_S) $(LIB_LINK_VERSION_FILE) $(LIB_LINK_FILE))
+          if [ "$(LIB_LINK_SONAME_FILE)" != "$(LIB_LINK_VERSION_FILE)" ]; then\
+            $(RM_LN_S) $(LIB_LINK_SONAME_FILE);\
+            $(LN_S) $(LIB_LINK_VERSION_FILE) $(LIB_LINK_SONAME_FILE); \
+          fi; \
+	  $(LN_S) $(LIB_LINK_SONAME_FILE) $(LIB_LINK_FILE))
+AFTER_INSTALL_SHARED_LIB_CMD = \
+	(cd $(LIB_LINK_INSTALL_DIR); \
+	  $(RM_LN_S) $(LIB_LINK_FILE); \
+          if [ "$(LIB_LINK_SONAME_FILE)" != "$(LIB_LINK_VERSION_FILE)" ]; then\
+            $(RM_LN_S) $(LIB_LINK_SONAME_FILE);\
+            $(LN_S) $(LIB_LINK_VERSION_FILE) $(LIB_LINK_SONAME_FILE); \
+          fi; \
+	  $(LN_S) $(LIB_LINK_SONAME_FILE) $(LIB_LINK_FILE); \
+	)
+AFTER_INSTALL_SHARED_LIB_CHOWN = \
+	(cd $(LIB_LINK_INSTALL_DIR); \
+	chown $(CHOWN_TO) $(LIB_LINK_SONAME_FILE); \
+	chown $(CHOWN_TO) $(LIB_LINK_FILE))
 OBJ_MERGE_CMD		= \
 	$(LD) -nostdlib $(OBJ_MERGE_CMD_FLAG) $(CORE_LDFLAGS) -o $(GNUSTEP_OBJ_DIR)/$(SUBPROJECT_PRODUCT) $^ ;
 
@@ -678,10 +695,9 @@
 HAVE_BUNDLES	= yes
 BUNDLE_LD	= $(LD)
 BUNDLE_LDFLAGS	+= -shared
-ADDITIONAL_LDFLAGS += -Wl,-R/usr/pkg/lib -L/usr/pkg/lib -Wl,-R/usr/X11R6/lib -L/usr/X11R6/lib
 FINAL_LDFLAGS   = -rdynamic
-ADDITIONAL_INCLUDE_DIRS += -I/usr/pkg/include
-STATIC_LDFLAGS += -static
+STATIC_LDFLAGS += -static
+
 endif
 #
 # end DragonFly
