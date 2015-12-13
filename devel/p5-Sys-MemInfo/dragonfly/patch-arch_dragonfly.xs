--- /dev/null	2015-12-12 12:33:16.341252360 +0200
+++ arch/dragonfly.xs
@@ -0,0 +1,110 @@
+#include "EXTERN.h"
+#include "perl.h"
+#include "XSUB.h"
+
+MODULE = Sys::MemInfo PACKAGE = Sys::MemInfo
+
+#include "arch/functions.h"
+#include <stdio.h>
+#include <unistd.h>
+#include <sys/param.h>
+#include <sys/sysctl.h>
+#include <vm/vm_param.h>
+
+void
+availkeys()
+	PREINIT:
+	PPCODE:
+                XPUSHs(sv_2mortal(newSVpv(_totalmem, strlen(_totalmem))));
+                XPUSHs(sv_2mortal(newSVpv(_freemem, strlen(_freemem))));
+                XPUSHs(sv_2mortal(newSVpv(_totalswap, strlen(_totalswap))));
+                XPUSHs(sv_2mortal(newSVpv(_freeswap, strlen(_freeswap))));
+
+double
+totalmem()
+	PROTOTYPE: DISABLE
+	CODE:
+		unsigned long long ret = 0;
+		size_t len = sizeof (ret);
+		static int mib[2] = { CTL_HW, HW_PHYSMEM };
+
+		if (sysctl (mib, 2, &ret, &len, NULL, 0) != -1) {
+      			RETVAL = (double) (ret);
+    		} else {
+			RETVAL = 0;
+		}
+	OUTPUT:
+		RETVAL
+		
+
+double
+freemem()
+	PROTOTYPE: DISABLE
+	CODE:
+		double ret= 0;
+		u_int fmem = 0;
+		size_t len = sizeof (fmem);
+		static int pagesize = 0;
+
+		if (!pagesize) pagesize = getpagesize();
+
+		if (sysctlbyname("vm.stats.vm.v_free_count", &fmem, &len, NULL, 0) != -1) {
+			ret = (double) (fmem);
+			ret *= pagesize;
+		}
+
+		RETVAL = ret;
+	OUTPUT:
+		RETVAL
+
+double
+totalswap()
+	PROTOTYPE: DISABLE
+	CODE:
+		double ret= 0;
+		int free_swap = 0;
+		int sused_anon = 0;
+		int sused_cache = 0;
+		size_t len = sizeof (free_swap);
+		static int pagesize = 0;
+
+		if (!pagesize) pagesize = getpagesize();
+
+		if (sysctlbyname("vm.swap_size", &free_swap, &len, NULL, 0) != -1) {
+			ret = (double) (free_swap);
+		}
+		if (sysctlbyname("vm.swap_anon_use", &sused_anon, &len, NULL, 0) != -1) {
+			ret += (double) (sused_anon);
+		}
+		if (sysctlbyname("vm.swap_cache_use", &sused_cache, &len, NULL, 0) != -1) {
+			ret += (double) (sused_cache);
+		}
+
+		ret *= pagesize;
+
+		RETVAL = ret;
+	OUTPUT:
+		RETVAL
+
+double
+freeswap()
+	PROTOTYPE: DISABLE
+	CODE:
+		double ret= 0;
+		int free_swap = 0;
+		size_t len = sizeof (free_swap);
+		static int pagesize = 0;
+
+		if (!pagesize) pagesize = getpagesize();
+
+		if (sysctlbyname("vm.swap_size", &free_swap, &len, NULL, 0) != -1) {
+			ret = (double) (free_swap);
+		}
+
+		ret *= pagesize;
+
+		RETVAL = ret;
+	OUTPUT:
+		RETVAL
+
+# vim:et:ts=2:sts=2:sw=2
