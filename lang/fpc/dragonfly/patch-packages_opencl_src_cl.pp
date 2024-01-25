--- packages/opencl/src/cl.pp.intermediate	2024-01-09 20:26:04 UTC
+++ packages/opencl/src/cl.pp
@@ -48,7 +48,7 @@ const
   OpenCLlib = 'OpenCL.dll';
   {$DEFINE extdecl := stdcall}
 {$ELSE}
-  {$IF DEFINED(LINUX) OR DEFINED(FREEBSD)}
+  {$IF DEFINED(LINUX) OR DEFINED(FREEBSD) OR DEFINED(DRAGONFLY)}
   {$DEFINE DYNLINK}
 const
   OpenCLlib = 'libOpenCL.so';
