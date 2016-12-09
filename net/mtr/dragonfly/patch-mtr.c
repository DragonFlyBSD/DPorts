Disable SCTP support on DragonFly.

--- mtr.c.intermediate	2016-12-08 08:11:36.000000000 +0200
+++ mtr.c
@@ -481,10 +481,16 @@ void parse_arg (int argc, char **argv)
         fprintf(stderr, "-u , -T and -S are mutually exclusive.\n");
         exit(EXIT_FAILURE);
       }
+#ifdef __DragonFly__
+      fprintf( stderr, "SCTP not available.\n" );
+      exit(EXIT_FAILURE);
+      break;
+#else
       if (!remoteport) {
         remoteport = 80;
       }
       mtrtype = IPPROTO_SCTP;
+#endif
     case 'b':
       show_ips = 1;
       break;
