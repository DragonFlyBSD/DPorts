--- src/dragonfly.h.orig	2015-09-11 10:52:16.572726119 +0300
+++ src/dragonfly.h
@@ -0,0 +1,21 @@
+/* -*- mode: c; c-basic-offset: 4; tab-width: 4; indent-tabs-mode: t -*- */
+
+#ifndef DRAGONFLY_H_
+#define DRAGONFLY_H_
+
+#include "common.h"
+#include <sys/param.h>
+#include <sys/mount.h>
+#include <sys/ucred.h>
+#include <fcntl.h>
+#include <kvm.h>
+#include <pthread.h>
+#include <stdbool.h>
+
+kvm_t *kd;
+pthread_mutex_t kvm_proc_mutex;
+
+int get_entropy_avail(unsigned int *);
+int get_entropy_poolsize(unsigned int *);
+
+#endif /*DRAGONFLY_H_*/
