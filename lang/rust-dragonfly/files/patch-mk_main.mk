--- mk/main.mk.old	2015-04-16 20:36:39.000000000 +0200
+++ mk/main.mk	2015-05-01 12:38:46.600173000 +0200
@@ -289,8 +289,8 @@
 endif
 
 # Any rules that depend on LLVM should depend on LLVM_CONFIG
-LLVM_CONFIG_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-config$$(X_$(1))
-LLVM_MC_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-mc$$(X_$(1))
+LLVM_CONFIG_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-config36$$(X_$(1))
+LLVM_MC_$(1):=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-mc36$$(X_$(1))
 LLVM_VERSION_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --version)
 LLVM_BINDIR_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --bindir)
 LLVM_INCDIR_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --includedir)
@@ -303,8 +303,8 @@
 LLVM_CXXFLAGS_$(1)=$$(subst -I, -iquote , $$(shell "$$(LLVM_CONFIG_$(1))" --cxxflags))
 LLVM_HOST_TRIPLE_$(1)=$$(shell "$$(LLVM_CONFIG_$(1))" --host-target)
 
-LLVM_AS_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-as$$(X_$(1))
-LLC_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llc$$(X_$(1))
+LLVM_AS_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llvm-as36$$(X_$(1))
+LLC_$(1)=$$(CFG_LLVM_INST_DIR_$(1))/bin/llc36$$(X_$(1))
 
 endef
 
