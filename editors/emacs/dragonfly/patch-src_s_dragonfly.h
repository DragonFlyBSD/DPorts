--- /dev/null	2013-01-02 23:33:27.039173345 +0100
+++ src/s/dragonfly.h	2013-01-02 23:33:15.943406000 +0100
@@ -0,0 +1,72 @@
+/* System description header for DragonFly BSD.
+
+Copyright (C) 1994-2012  Free Software Foundation, Inc.
+
+Author: Shawn M. Carey
+(according to authors.el)
+
+This file is part of GNU Emacs.
+
+GNU Emacs is free software: you can redistribute it and/or modify
+it under the terms of the GNU General Public License as published by
+the Free Software Foundation, either version 3 of the License, or
+(at your option) any later version.
+
+GNU Emacs is distributed in the hope that it will be useful,
+but WITHOUT ANY WARRANTY; without even the implied warranty of
+MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
+GNU General Public License for more details.
+
+You should have received a copy of the GNU General Public License
+along with GNU Emacs.  If not, see <http://www.gnu.org/licenses/>.  */
+
+/* Get most of the stuff from bsd-common */
+#include "bsd-common.h"
+
+#define PENDING_OUTPUT_COUNT(FILE) __fpending(FILE)
+
+/* This silences a few compilation warnings.  */
+#undef BSD_SYSTEM
+#define BSD_SYSTEM 199506
+
+/* Don't close pty in process.c to make it as controlling terminal.
+   It is already a controlling terminal of subprocess, because we did
+   ioctl TIOCSCTTY.  */
+#define DONT_REOPEN_PTY
+
+/* Circumvent a bug in FreeBSD.  In the following sequence of
+   writes/reads on a PTY, read(2) returns bogus data:
+
+   write(2)  1022 bytes
+   write(2)   954 bytes, get EAGAIN
+   read(2)   1024 bytes in process_read_output
+   read(2)     11 bytes in process_read_output
+
+   That is, read(2) returns more bytes than have ever been written
+   successfully.  The 1033 bytes read are the 1022 bytes written
+   successfully after processing (for example with CRs added if the
+   terminal is set up that way which it is here).  The same bytes will
+   be seen again in a later read(2), without the CRs.  */
+#define BROKEN_PTY_READ_AFTER_EAGAIN 1
+
+/* Tell that garbage collector that setjmp is known to save all
+   registers relevant for conservative garbage collection in the jmp_buf.  */
+#define GC_SETJMP_WORKS 1
+
+#define PTY_ITERATION	int i; for (i = 0; i < 1; i++)
+#define PTY_NAME_SPRINTF	/* none */
+#define PTY_TTY_NAME_SPRINTF	/* none */
+#define PTY_OPEN						\
+  do								\
+    {								\
+      int slave;						\
+      if (openpty (&fd, &slave, pty_name, NULL, NULL) == -1)	\
+	fd = -1;						\
+      else							\
+	emacs_close (slave);					\
+    }								\
+  while (0)
+
+/* Use the GC_MAKE_GCPROS_NOOPS (see lisp.h) method for marking the stack.  */
+#define GC_MARK_STACK 	GC_MAKE_GCPROS_NOOPS
+
