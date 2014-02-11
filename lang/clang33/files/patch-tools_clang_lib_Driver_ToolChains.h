
$FreeBSD: head/lang/clang33/files/patch-tools_clang_lib_Driver_ToolChains.h 333046 2013-11-06 23:38:36Z brooks $

--- tools/clang/lib/Driver/ToolChains.h.orig
+++ tools/clang/lib/Driver/ToolChains.h
@@ -515,9 +515,14 @@
   FreeBSD(const Driver &D, const llvm::Triple &Triple,
           const ArgList &Args);
 
+  virtual CXXStdlibType GetCXXStdlibType(const ArgList &Args) const;
+
   virtual bool IsMathErrnoDefault() const { return false; }
   virtual bool IsObjCNonFragileABIDefault() const { return true; }
 
+  virtual void AddClangCXXStdlibIncludeArgs(const ArgList &DriverArgs,
+                                            ArgStringList &CC1Args) const;
+
   virtual bool UseSjLjExceptions() const;
 protected:
   virtual Tool *buildAssembler() const;
