--- mk/main.mk.old	2015-06-12 04:56:19.000000000 +0200
+++ mk/main.mk	2015-06-13 13:14:29.406997000 +0200
@@ -287,9 +287,9 @@
 endif
 
 # Any rules that depend on LLVM should depend on LLVM_CONFIG
-LLVM_CONFIG_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-config$$(X_$(1))
-LLVM_MC_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-mc$$(X_$(1))
-LLVM_AR_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-ar$$(X_$(1))
+LLVM_CONFIG_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-config36$$(X_$(1))
+LLVM_MC_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-mc36$$(X_$(1))
+LLVM_AR_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-ar36$$(X_$(1))
 LLVM_VERSION_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --version)
 LLVM_BINDIR_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --bindir)
 LLVM_INCDIR_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --includedir)
@@ -306,8 +306,8 @@
 endif
 LLVM_HOST_TRIPLE_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --host-target)
 
-LLVM_AS_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-as$$(X_$(1))
-LLC_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llc$$(X_$(1))
+LLVM_AS_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-as36$$(X_$(1))
+LLC_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llc36$$(X_$(1))
 
 endef
 
