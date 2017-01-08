--- src/julia.h.orig	2016-09-20 05:54:21.000000000 +0300
+++ src/julia.h
@@ -1339,7 +1339,7 @@ JL_DLLEXPORT int jl_dlclose(jl_uv_libhan
 JL_DLLEXPORT void *jl_dlsym_e(jl_uv_libhandle handle, const char *symbol);
 JL_DLLEXPORT void *jl_dlsym(jl_uv_libhandle handle, const char *symbol);
 
-#if defined(__linux__) || defined(__FreeBSD__)
+#if defined(__linux__) || defined(__FreeBSD__) || defined(__DragonFly__)
 JL_DLLEXPORT const char *jl_lookup_soname(const char *pfx, size_t n);
 #endif
 
