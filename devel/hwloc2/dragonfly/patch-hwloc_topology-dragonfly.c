--- /dev/null	2021-03-21 08:56:36 UTC
+++ hwloc/topology-dragonfly.c
@@ -0,0 +1,221 @@
+/*
+ * Copyright © 2012 Aleksej Saushev, The NetBSD Foundation
+ * Copyright © 2009-2014 Inria.  All rights reserved.
+ * Copyright © 2009-2010 Université Bordeaux
+ * Copyright © 2011 Cisco Systems, Inc.  All rights reserved.
+ * See COPYING in top-level directory.
+ */
+
+#include <private/autogen/config.h>
+
+#include <sys/types.h>
+#include <sys/lwp.h>
+#include <sys/sched.h>
+#include <machine/cpumask.h>
+#include <stdlib.h>
+#include <inttypes.h>
+#include <sys/param.h>
+#include <pthread.h>
+#include <pthread_np.h>
+#include <sched.h>
+#include <sys/sysctl.h>
+
+#include <hwloc.h>
+#include <private/private.h>
+#include <private/debug.h>
+
+static void
+hwloc_dragonfly_bsd2hwloc(hwloc_bitmap_t hwloc_cpuset, const cpumask_t *cpumask)
+{
+  unsigned cpu, cpulimit;
+  int found = 0;
+  hwloc_bitmap_zero(hwloc_cpuset);
+  cpulimit = sizeof(*cpumask) * CHAR_BIT;
+  for (cpu = 0; cpu < cpulimit; cpu++)
+    if (CPUMASK_TESTBIT(*cpumask, cpu)) {
+      hwloc_bitmap_set(hwloc_cpuset, cpu);
+      found++;
+    }
+  /* when never bound, it returns an empty set, fill it instead */
+  if (!found)
+    hwloc_bitmap_fill(hwloc_cpuset);
+}
+
+static void
+hwloc_dragonfly_hwloc2bsd(hwloc_const_bitmap_t hwloc_cpuset, cpumask_t *cpumask)
+{
+  unsigned cpu, cpulimit;
+  CPUMASK_ASSZERO(*cpumask);
+  cpulimit = sizeof(*cpumask) * CHAR_BIT;
+  for (cpu = 0; cpu < cpulimit; cpu++)
+    if (hwloc_bitmap_isset(hwloc_cpuset, cpu))
+      CPUMASK_ORBIT(*cpumask, cpu);
+}
+
+static int
+hwloc_dragonfly_set_proc_cpubind(hwloc_topology_t topology __hwloc_attribute_unused, hwloc_pid_t pid, hwloc_const_bitmap_t hwloc_cpuset, int flags __hwloc_attribute_unused)
+{
+  int status;
+  cpumask_t cpumask;
+
+  hwloc_dragonfly_hwloc2bsd(hwloc_cpuset, &cpumask);
+  status = lwp_setaffinity(pid, 1, &cpumask);
+
+  return status;
+}
+
+static int
+hwloc_dragonfly_get_proc_cpubind(hwloc_topology_t topology __hwloc_attribute_unused, hwloc_pid_t pid, hwloc_bitmap_t hwloc_cpuset, int flags __hwloc_attribute_unused)
+{
+  int status;
+  cpumask_t cpumask;
+
+  status = lwp_getaffinity(pid, 1, &cpumask);
+  hwloc_dragonfly_bsd2hwloc(hwloc_cpuset, &cpumask);
+
+  return status;
+}
+
+
+static int
+hwloc_dragonfly_set_thisproc_cpubind(hwloc_topology_t topology, hwloc_const_bitmap_t hwloc_cpuset, int flags)
+{
+  return hwloc_dragonfly_set_proc_cpubind(topology, 0, hwloc_cpuset, flags);
+}
+
+static int
+hwloc_dragonfly_get_thisproc_cpubind(hwloc_topology_t topology, hwloc_bitmap_t hwloc_cpuset, int flags)
+{
+  return hwloc_dragonfly_get_proc_cpubind(topology, 0, hwloc_cpuset, flags);
+}
+
+
+static int
+hwloc_dragonfly_set_thread_cpubind(hwloc_topology_t topology __hwloc_attribute_unused, hwloc_thread_t tid, hwloc_const_bitmap_t hwloc_cpuset, int flags __hwloc_attribute_unused)
+{
+  int status;
+  cpu_set_t cpuset;
+
+  hwloc_dragonfly_hwloc2bsd(hwloc_cpuset, &cpuset);
+  status = pthread_setaffinity_np(tid, sizeof(cpuset), &cpuset);
+
+  if (status) {
+    errno = status;
+    return -1;
+  }
+  return 0;
+}
+
+static int
+hwloc_dragonfly_get_thread_cpubind(hwloc_topology_t topology __hwloc_attribute_unused, hwloc_thread_t tid, hwloc_bitmap_t hwloc_cpuset, int flags __hwloc_attribute_unused)
+{
+  int status;
+  cpu_set_t cpuset;
+
+  status = pthread_getaffinity_np(tid, sizeof(cpuset), &cpuset);
+  hwloc_dragonfly_bsd2hwloc(hwloc_cpuset, &cpuset);
+
+  if (status) {
+    errno = status;
+    return -1;
+  }
+  return 0;
+}
+
+
+static int
+hwloc_dragonfly_set_thisthread_cpubind(hwloc_topology_t topology, hwloc_const_bitmap_t hwloc_cpuset, int flags)
+{
+  return hwloc_dragonfly_set_thread_cpubind(topology, pthread_self(), hwloc_cpuset, flags);
+}
+
+static int
+hwloc_dragonfly_get_thisthread_cpubind(hwloc_topology_t topology, hwloc_bitmap_t hwloc_cpuset, int flags)
+{
+  return hwloc_dragonfly_get_thread_cpubind(topology, pthread_self(), hwloc_cpuset, flags);
+}
+
+static int
+hwloc_look_dragonfly(struct hwloc_backend *backend, struct hwloc_disc_status *dstatus)
+{
+  struct hwloc_topology *topology = backend->topology;
+
+  if (dstatus->phase == HWLOC_DISC_PHASE_CPU) {
+    if (!topology->levels[0][0]->cpuset) {
+      /* Nobody (even the x86 backend) created objects yet, setup basic objects */
+      int nbprocs = hwloc_fallback_nbprocessors(0);
+      if (nbprocs >= 1)
+        topology->support.discovery->pu = 1;
+      else
+        nbprocs = 1;
+      hwloc_alloc_root_sets(topology->levels[0][0]);
+      hwloc_setup_pu_level(topology, nbprocs);
+    }
+  } else if (dstatus->phase == HWLOC_DISC_PHASE_MEMORY) {
+      int64_t memsize;
+      memsize = hwloc_fallback_memsize();
+#if (defined HAVE_SYSCTL) && (defined HAVE_SYS_SYSCTL_H)
+      if (memsize < 1) {
+         int mib[2] = { CTL_HW, HW_PHYSMEM };
+         unsigned long physmem;
+         size_t len = sizeof(physmem);
+         sysctl(mib, 2, &physmem, &len, NULL, 0);
+         memsize = physmem;
+      }
+#endif
+      if (memsize > 0)
+        topology->machine_memory.local_memory = memsize;
+  }
+  hwloc_obj_add_info(topology->levels[0][0], "Backend", "DragonFlyBSD");
+  hwloc_add_uname_info(topology, NULL);
+  return 0;
+}
+
+void
+hwloc_set_dragonfly_hooks(struct hwloc_binding_hooks *hooks __hwloc_attribute_unused,
+                        struct hwloc_topology_support *support __hwloc_attribute_unused)
+{
+  hooks->set_proc_cpubind = hwloc_dragonfly_set_proc_cpubind;
+  hooks->get_proc_cpubind = hwloc_dragonfly_get_proc_cpubind;
+  hooks->set_thisproc_cpubind = hwloc_dragonfly_set_thisproc_cpubind;
+  hooks->get_thisproc_cpubind = hwloc_dragonfly_get_thisproc_cpubind;
+
+  hooks->set_thread_cpubind = hwloc_dragonfly_set_thread_cpubind;
+  hooks->get_thread_cpubind = hwloc_dragonfly_get_thread_cpubind;
+  hooks->set_thisthread_cpubind = hwloc_dragonfly_set_thisthread_cpubind;
+  hooks->get_thisthread_cpubind = hwloc_dragonfly_get_thisthread_cpubind;
+}
+
+static struct hwloc_backend *
+hwloc_dragonfly_component_instantiate(struct hwloc_topology *topology,
+				    struct hwloc_disc_component *component,
+				    unsigned excluded_phases __hwloc_attribute_unused,
+				    const void *_data1 __hwloc_attribute_unused,
+				    const void *_data2 __hwloc_attribute_unused,
+				    const void *_data3 __hwloc_attribute_unused)
+{
+  struct hwloc_backend *backend;
+  backend = hwloc_backend_alloc(topology, component);
+  if (!backend)
+    return NULL;
+  backend->discover = hwloc_look_dragonfly;
+  return backend;
+}
+
+static struct hwloc_disc_component hwloc_dragonfly_disc_component = {
+  "dragonfly",
+  HWLOC_DISC_PHASE_CPU|HWLOC_DISC_PHASE_MEMORY,
+  HWLOC_DISC_PHASE_GLOBAL,
+  hwloc_dragonfly_component_instantiate,
+  50,
+  1,
+  NULL
+};
+
+const struct hwloc_component hwloc_dragonfly_component = {
+  HWLOC_COMPONENT_ABI,
+  NULL, NULL,
+  HWLOC_COMPONENT_TYPE_DISC,
+  0,
+  &hwloc_dragonfly_disc_component
+};
