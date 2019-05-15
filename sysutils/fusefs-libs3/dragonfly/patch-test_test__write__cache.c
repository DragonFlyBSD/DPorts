--- test/test_write_cache.c.orig	2019-04-16 18:46:20 UTC
+++ test/test_write_cache.c
@@ -187,7 +187,7 @@ int main(int argc, char *argv[]) {
 
     assert(fuse_opt_parse(&args, &options, option_spec, NULL) == 0);
     assert(fuse_parse_cmdline(&args, &fuse_opts) == 0);
-#ifndef __FreeBSD__    
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
     assert(fuse_opt_add_arg(&args, "-oauto_unmount") == 0);
 #endif
     se = fuse_session_new(&args, &tfs_oper,
