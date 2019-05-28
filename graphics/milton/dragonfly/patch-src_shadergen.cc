--- src/shadergen.cc.orig	2019-03-15 04:11:43 UTC
+++ src/shadergen.cc
@@ -361,7 +361,9 @@ handle_errno(int error)
 
        case ENOBUFS:         str = "No buffer space available (POSIX.1 (XSI STREAMS option))"; break;
 
+#ifndef __DragonFly__
        case ENODATA:         str = "No message is available on the STREAM head read queue (POSIX.1)"; break;
+#endif
 
        case ENODEV:          str = "No such device (POSIX.1)"; break;
 
@@ -394,9 +396,11 @@ handle_errno(int error)
 
        case ENOSPC:          str = "No space left on device (POSIX.1)"; break;
 
+#ifndef __DragonFly__
        case ENOSR:           str = "No STREAM resources (POSIX.1 (XSI STREAMS option))"; break;
 
        case ENOSTR:          str = "Not a STREAM (POSIX.1 (XSI STREAMS option))"; break;
+#endif
 
        case ENOSYS:          str = "Function not implemented (POSIX.1)"; break;
 
@@ -465,7 +469,9 @@ handle_errno(int error)
 
        // case ESTRPIPE:        str = "Streams pipe error"; break;
 
+#ifndef __DragonFly__
        case ETIME:           str = "Timer expired (POSIX.1 (XSI STREAMS option))"; break;
+#endif
 
                        // (POSIX.1 says "STREAM ioctl(2) timeout")
 
