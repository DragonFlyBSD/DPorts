--- src/util/mercury_event.h.orig
+++ src/util/mercury_event.h
@@ -23,6 +23,7 @@
 typedef uint64_t eventfd_t;
 #        endif
 #    elif defined(HG_UTIL_HAS_SYSEVENT_H)
+#        include <time.h>
 #        include <sys/event.h>
 #        define HG_EVENT_IDENT 42 /* User-defined ident */
 #    endif
