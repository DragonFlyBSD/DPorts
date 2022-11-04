--- rules/build-package-data.mk.orig	2022-11-03 23:09:10 UTC
+++ rules/build-package-data.mk
@@ -65,7 +65,7 @@ endif
 #
 # Do `-iquote $(TOP)/$1` so package configure scripts can access their own source.
 $1_$2_CONFIGURE_CFLAGS = $$(filter-out -Werror,$$(SRC_CC_OPTS)) $$(CONF_CC_OPTS_STAGE$3) $$($1_CC_OPTS) $$($1_$2_CC_OPTS) $$(SRC_CC_WARNING_OPTS) -iquote $(TOP)/$1
-$1_$2_CONFIGURE_LDFLAGS = $$(SRC_LD_OPTS) $$($1_LD_OPTS) $$($1_$2_LD_OPTS)
+$1_$2_CONFIGURE_LDFLAGS = $$(SRC_LD_OPTS) $$($1_LD_OPTS) $$($1_$2_LD_OPTS) $$(EXTRA_LD_OPTS)
 $1_$2_CONFIGURE_CPPFLAGS = $$(SRC_CPP_OPTS) $$(CONF_CPP_OPTS_STAGE$3) $$($1_CPP_OPTS) $$($1_$2_CPP_OPTS)
 
 $1_$2_CONFIGURE_OPTS += --configure-option=CFLAGS="$$($1_$2_CONFIGURE_CFLAGS)"
