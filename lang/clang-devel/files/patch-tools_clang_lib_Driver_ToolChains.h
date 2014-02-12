
$FreeBSD: head/lang/clang-devel/files/patch-tools_clang_lib_Driver_ToolChains.h 332935 2013-11-06 00:13:02Z brooks $

--- tools/clang/lib/Driver/ToolChains.h.orig
+++ tools/clang/lib/Driver/ToolChains.h
@@ -515,9 +515,14 @@
   FreeBSD(const Driver &D, const llvm::Triple &Triple,
           const llvm::opt::ArgList &Args);
 
+  virtual CXXStdlibType GetCXXStdlibType(const llvm::opt::ArgList &Args) const;
+
   virtual bool IsMathErrnoDefault() const { return false; }
   virtual bool IsObjCNonFragileABIDefault() const { return true; }
 
+  virtual void AddClangCXXStdlibIncludeArgs(const llvm::opt::ArgList &DriverArgs,
+                                            llvm::opt::ArgStringList &CC1Args) const;
+
   virtual bool UseSjLjExceptions() const;
 protected:
   virtual Tool *buildAssembler() const;
