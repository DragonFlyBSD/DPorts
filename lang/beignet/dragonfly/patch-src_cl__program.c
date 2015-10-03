--- src/cl_program.c.bak	2015-07-02 10:39:05.000000000 +0300
+++ src/cl_program.c
@@ -744,10 +746,16 @@ cl_program_compile(cl_program
     p->opaque = compiler_program_compile_from_source(p->ctx->device->vendor_id, p->source, temp_header_path,
         p->build_log_max_sz, options, p->build_log, &p->build_log_sz);
 
+#ifndef __DragonFly__
     char rm_path[255]="rm ";
     strncat(rm_path, temp_header_path, strlen(temp_header_path));
     strncat(rm_path, " -rf", 4);
     int temp = system(rm_path);
+#else
+    char rm_path[255]="rm -rf ";
+    strncat(rm_path, temp_header_path, strlen(temp_header_path));
+    int temp = system(rm_path);
+#endif
 
     if(temp){
       assert(0);
