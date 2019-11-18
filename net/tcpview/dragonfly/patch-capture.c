--- capture.c.intermeidate	2019-11-17 14:28:44.000000000 +0000
+++ capture.c
@@ -65,7 +65,6 @@ static char rcsid[] =
 #ifdef __STDC__
 struct bpf_program *parse(char *, int, int, u_long);  /* gencode.c */
 void readfile(char *);
-char *malloc( int );
 static void max_bytes_callback( Widget, caddr_t, caddr_t );
 static void time_limit_callback( Widget, caddr_t, caddr_t );
 static void num_frame_callback( Widget, caddr_t, caddr_t );
@@ -77,7 +76,6 @@ static void dev_cancel( Widget, caddr_t,
 #else
 struct bpf_program *parse();  /* gencode.c */
 void readfile();
-char *malloc();
 static void max_bytes_callback();
 static void time_limit_callback();
 static void num_frame_callback();
