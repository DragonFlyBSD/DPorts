--- src/sysdeps/dragonfly.c.orig	2014-10-15 03:46:47.000000000 +0300
+++ src/sysdeps/dragonfly.c
@@ -29,7 +29,7 @@ char	errbuf[_POSIX2_LINE_MAX];
 
 
 // extern gboolean force_meminfo_update(void);
-#if defined(__i386__)
+#if defined(__i386__) || defined(__x86_64__)
 static void scan_for_sensors();
 #endif
 
@@ -46,7 +46,7 @@ gkrellm_sys_main_init(void)
 		fprintf(stderr, "Can't drop setgid privileges.");
 		exit(1);
 		}
-#if defined(__i386__)
+#if defined(__i386__) || defined(__x86_64__)
 	scan_for_sensors();
 #endif
 	if (setuid(getuid()) != 0)
@@ -90,7 +90,7 @@ get_ncpus(void)
 {
 	static int mib[] = { CTL_HW, HW_NCPU };
 	int ncpus;
-	int len = sizeof(int);
+	size_t len = sizeof(int);
 
 	if (sysctl(mib, 2, &ncpus, &len, NULL, 0) < 0)
 		return 1;
@@ -101,20 +101,21 @@ get_ncpus(void)
 void
 gkrellm_sys_cpu_read_data(void)
 {
-  int len, n;
+	size_t len;
+	int n;
 
-  if (!cp_time)
-    return;
+	if (!cp_time)
+		return;
 
-  len = sizeof (*cp_time) * ncpus;
-  if (sysctlbyname("kern.cputime", cp_time, &len, NULL, 0) != 0)
-    return;
-
-  for (n = 0; n < ncpus; n++)
-    gkrellm_cpu_assign_data(n, cp_time[n].cp_user,
-			    cp_time[n].cp_nice,
-			    cp_time[n].cp_sys,
-			    cp_time[n].cp_idle);
+	len = sizeof (*cp_time) * ncpus;
+	if (sysctlbyname("kern.cputime", cp_time, &len, NULL, 0) != 0)
+		return;
+
+	for (n = 0; n < ncpus; n++)
+		gkrellm_cpu_assign_data(n, cp_time[n].cp_user,
+					cp_time[n].cp_nice,
+					cp_time[n].cp_sys,
+					cp_time[n].cp_idle);
 }
 
 gboolean
@@ -133,12 +134,6 @@ gkrellm_sys_cpu_init(void)
 #include <sys/sysctl.h>
 #include <sys/user.h>
 
-/*
- * This is ugly, but we need PID_MAX, in anyway.  Since 5.0-RELEASE
- * will have vm.stats.vm.v_forks, this will be obsolete in the future.
- */
-#define	PID_MAX		99999
-
 #include <kvm.h>
 #include <limits.h>
 #include <paths.h>
@@ -252,7 +247,7 @@ gkrellm_sys_disk_name_from_device(gint d
 	}
 
 gint
-gkrellm_sys_disk_order_from_name(gchar *name)
+gkrellm_sys_disk_order_from_name(const gchar *name)
 	{
 	return -1;	/* Append as added */
 	}
@@ -336,19 +331,13 @@ gkrellm_sys_inet_read_tcp_data(void)
 	void *so_begin, *so_end;
 	struct xtcpcb *xtp;
 	struct inpcb *inp;
-	struct xsocket *so;
-	const char *varname, *protoname;
+	const char *varname;
 	size_t len;
 	void *buf;
-	int vflag;
 	ActiveTCP	tcp;
 	gint		tcp_status;
 
 	varname = "net.inet.tcp.pcblist";
-	protoname = "tcp";
-
-	vflag = INP_IPV4 | INP_IPV6;
-
 	buf = NULL;
 	len = 0;
 
@@ -371,17 +360,24 @@ gkrellm_sys_inet_read_tcp_data(void)
 		if (xtp->xt_len != sizeof *xtp)
 			goto out;
 		inp = &xtp->xt_inp;
-		so = &xtp->xt_socket;
-		if ((inp->inp_vflag & vflag) == 0)
-			continue;
+#ifdef in6p_vflag
 		if (inp->inp_vflag & INP_IPV4) {
+#else
+		if (INP_ISIPV4(inp)) {
+#endif
 			tcp.remote_addr.s_addr = inp->inp_faddr.s_addr;
 			tcp.family = AF_INET;
+#ifdef in6p_vflag
 		} else if (inp->inp_vflag & INP_IPV6) {
+#else
+		} else if (INP_ISIPV6(inp)) {
+#endif
 			memcpy(&tcp.remote_addr6,
 			       &inp->in6p_faddr,
 			       sizeof(struct in6_addr));
-				tcp.family = AF_INET6;
+			tcp.family = AF_INET6;
+		} else {
+			continue;
 		}
 
 		tcp.remote_port = ntohs(inp->inp_fport);
@@ -482,7 +478,7 @@ get_bufspace(guint64 *bufspacep)
 		}
 
 	if (sysctl(oid_bufspace, oid_bufspace_len,
-		   &bufspace, &bufspace_len, 0, 0) < 0)
+		   &bufspace, &bufspace_len, NULL, 0) < 0)
 		return 0;
 	*bufspacep = bufspace;
 	return 1;	
@@ -532,7 +528,7 @@ gkrellm_sys_mem_read_data(void)
 	{
 	static gint	psize, pshift = 0;
 	static gint	first_time_done = 0;
-	guint64		total, used, x_used, free, shared, buffers, cached;
+	guint64		total, used, free, shared, buffers = 0, cached;
 	struct vmtotal	vmt;
 	size_t		length_vmt = sizeof(vmt);
 	static int	oid_vmt[] = { CTL_VM, VM_TOTAL };
@@ -556,35 +552,29 @@ gkrellm_sys_mem_read_data(void)
 		}
 
 	shared = 0;
-
 	if (!first_time_done)
 		{
 		for (i = 0; mibs[i].name; ++i)
 			{
 			mibs[i].oid_len = sizeof(mibs[i].oid);
-			if (gk_sysctlnametomib(mibs[i].name,
-					       mibs[i].oid,
+			if (gk_sysctlnametomib(mibs[i].name, mibs[i].oid,
 					       &mibs[i].oid_len) < 0)
-			 	return;
+				return;
 			mibs[i].value_len = sizeof(mibs[i].value);
 			}
-		++first_time_done;
 		}
 	for (i = 0; mibs[i].name; ++i)
-		if (sysctl(mibs[i].oid, mibs[i].oid_len,
-			   &mibs[i].value,
-			   &mibs[i].value_len, 0, 0) < 0)
+		if (sysctl(mibs[i].oid, mibs[i].oid_len, &mibs[i].value,
+			   &mibs[i].value_len, NULL, 0) < 0)
 			return;
-	total = (mibs[MIB_V_PAGE_COUNT].value -
-		     mibs[MIB_V_WIRE_COUNT].value) << pshift;
-	x_used = (mibs[MIB_V_ACTIVE_COUNT].value +
-		      mibs[MIB_V_INACTIVE_COUNT].value) << pshift;
-	free = mibs[MIB_V_FREE_COUNT].value << pshift;
+	total = (guint64)(mibs[MIB_V_PAGE_COUNT].value) << pshift;
+	free = (guint64)(mibs[MIB_V_INACTIVE_COUNT].value +
+			 mibs[MIB_V_FREE_COUNT].value) << pshift;
 	if (sysctl(oid_vmt, 2, &vmt, &length_vmt, NULL, 0) == 0)
-		shared = vmt.t_rmshr << pshift;
+		shared = (guint64)vmt.t_rmshr << pshift;
 	get_bufspace(&buffers);
-	cached = mibs[MIB_V_CACHE_COUNT].value << pshift;
-	used = x_used - buffers - cached;
+	cached = (guint64)mibs[MIB_V_CACHE_COUNT].value << pshift;
+	used = total - free;
 	gkrellm_mem_assign_data(total, used, free, shared, buffers, cached);
 
 	swapin = mibs[MIB_V_SWAPPGSIN].value;
@@ -599,7 +589,7 @@ gkrellm_sys_mem_read_data(void)
 			{
 			if (strncmp(buf, "Swap:", 5) == 0)
 				{
-				sscanf(buf, "Swap: %llu %llu",
+				sscanf(buf, "Swap: %lu %lu",
 				       &swap_total, &swap_used);
 				break;
 				}
@@ -609,11 +599,11 @@ gkrellm_sys_mem_read_data(void)
 	}
 
 	if (first_time_done == 0)
-	{
-	swapmode(&swap_total, &swap_used);
-	swap_used = swap_total - swap_used;
-	first_time_done = 1;
-	}
+		{
+		first_time_done = 1;
+		swapmode(&swap_total, &swap_used);
+		swap_used = swap_total - swap_used;
+		}
 	}
 
 void
@@ -667,11 +657,13 @@ gkrellm_sys_battery_read_data(void)
 	size_t		size;
 	int		acpi_info[4];
 	int		i;
+#if defined(__i386__)
 	int		f, r;
 	struct apm_info	info;
+	gint		batt_num = 0;
+#endif
 	gboolean	available, on_line, charging;
 	gint		percent, time_left;
-	gint		batt_num = 0;
 
 	if (!first_time_done)
 		{
@@ -716,6 +708,7 @@ gkrellm_sys_battery_read_data(void)
 			return;
 		}
 
+#if defined(__i386__)
 	if ((f = open(APMDEV, O_RDONLY)) == -1)
 		return;
 	if ((r = ioctl(f, APMIO_GETINFO, &info)) == -1) {
@@ -773,6 +766,7 @@ gkrellm_sys_battery_read_data(void)
 #endif
 
 	close(f);
+#endif
 	}
 
 gboolean
@@ -800,7 +794,9 @@ gkrellm_sys_battery_init(void)
 /* ===================================================================== */
 /* Sensor monitor interface */
 
-#if defined(__i386__)
+#if defined(__i386__) || defined(__x86_64__)
+
+#include <sys/sensors.h>
 
 typedef struct
 	{
@@ -830,16 +826,13 @@ static VoltDefault	voltdefault0[] =
 #include <dirent.h>
 #include <osreldate.h>
 #include <machine/cpufunc.h>
-#if (__DragonFly_version < 200700)
-#include <machine/smb.h>
-#else
-#include <bus/smbus/smb.h>
-#endif
+#include <dev/smbus/smb/smb.h>
 
 /* Interface types */
 #define INTERFACE_IO		0
 #define INTERFACE_SMB		1
 #define INTERFACE_ACPI		2
+#define INTERFACE_CORETEMP	3
 
 /* Addresses to use for /dev/io */
 #define WBIO1			0x295
@@ -872,7 +865,9 @@ get_data(int iodev, u_char command, int
 		struct smbcmd cmd;
 
 		bzero(&cmd, sizeof(cmd));
-		cmd.data.byte_ptr = &byte;
+#if 0
+		cmd.data.byte_ptr = (char *)&byte;
+#endif
 		cmd.slave         = 0x5a;
 		cmd.cmd           = command;
 		if (ioctl(iodev, SMB_READB, (caddr_t)&cmd) == -1)
@@ -880,6 +875,7 @@ get_data(int iodev, u_char command, int
 			close(iodev);
 			return FALSE;
 			}
+		byte = (u_char)cmd.rdata.byte;
 		}
 	else
 		{
@@ -897,6 +893,8 @@ gkrellm_sys_sensors_get_temperature(gcha
 
 	{
 	u_char byte;
+	int value;
+	size_t size;
 
 	if (interface == MBMON_INTERFACE)
 		{
@@ -906,15 +904,31 @@ gkrellm_sys_sensors_get_temperature(gcha
 
 	if (interface == INTERFACE_ACPI)
 		{
-		int value;
-		size_t size = sizeof(value);
-
+		size = sizeof(value);
 		if (sysctlbyname(path, &value, &size, NULL, 0) < 0)
 			return FALSE;
 		if (temp)
-			*temp = (gfloat) TZ_KELVTOC(value);
+			*temp = (interface == INTERFACE_CORETEMP) ?
+				(gfloat) value : (gfloat) TZ_KELVTOC(value);
 		return TRUE;
 		}
+
+	else if (interface == INTERFACE_CORETEMP)
+		{
+		struct sensor sensor;
+		size_t	slen;
+		slen = sizeof(struct sensor);
+
+		size = sizeof(value);
+		if (sysctlbyname(path, &sensor, &slen, NULL, 0) < 0)
+			return FALSE;
+		if (sensor.type != SENSOR_TEMP)
+			return FALSE;
+		if (temp)
+			*temp = (float) ((sensor.value - 273150000) / 1000000.0);
+		return TRUE;
+		}
+
 	if (get_data(iodev, LM78_TEMP, interface, &byte))
 		{
 		if (temp)
@@ -986,8 +1000,8 @@ gkrellm_sys_sensors_init(void)
 	{
 	gchar		mib_name[256], label[8];
 	gint		interface, id;
-	int		oid_acpi_temp[CTL_MAXNAME + 2];
-	size_t		oid_acpi_temp_len = sizeof(oid_acpi_temp);
+	int		oid[CTL_MAXNAME + 2];
+	size_t		oid_len;
 	GList		*list;
 	struct freebsd_sensor *sensor;
 
@@ -995,12 +1009,13 @@ gkrellm_sys_sensors_init(void)
 	*/
 	gkrellm_sys_sensors_mbmon_check(TRUE);
 
-	for (id = 0;;)
-	{
+	/* ACPI Thermal */
+	for (id = 0;; id++)
+		{
 		snprintf(mib_name, sizeof(mib_name),
 			 "hw.acpi.thermal.tz%d.temperature", id);
-		if (gk_sysctlnametomib(mib_name, oid_acpi_temp,
-				       &oid_acpi_temp_len) < 0)
+		oid_len = sizeof(oid);
+		if (gk_sysctlnametomib(mib_name, oid, &oid_len) < 0)
 			break;
 		interface = INTERFACE_ACPI;
 		if (!gkrellm_sys_sensors_get_temperature(mib_name, 0, 0,
@@ -1010,7 +1025,44 @@ gkrellm_sys_sensors_init(void)
 		gkrellm_sensors_add_sensor(SENSOR_TEMPERATURE, NULL,
 					   mib_name, 0, 0,
 					   interface, 1.0, 0.0, NULL, label);
-	}
+		}
+
+	/* Coretemp cpu */
+	for (id = 0;; id++)
+		{
+		snprintf(mib_name, sizeof(mib_name),
+			 "hw.sensors.cpu%d.temp0", id);
+		oid_len = sizeof(oid);
+		if (gk_sysctlnametomib(mib_name, oid, &oid_len) < 0)
+			break;
+		interface = INTERFACE_CORETEMP;
+		if (!gkrellm_sys_sensors_get_temperature(mib_name, 0, 0,
+							 interface, NULL))
+			continue;
+		snprintf(label, sizeof(label), "cpu%d", id);
+		gkrellm_sensors_add_sensor(SENSOR_TEMPERATURE, NULL,
+					   mib_name, 0, 0,
+					   interface, 1.0, 0.0, NULL, label);
+		}
+
+	/* Coretemp node */
+	for (id = 0;; id++)
+		{
+		snprintf(mib_name, sizeof(mib_name),
+			 "hw.sensors.cpu_node%d.temp0", id);
+		oid_len = sizeof(oid);
+		if (gk_sysctlnametomib(mib_name, oid, &oid_len) < 0)
+			break;
+		interface = INTERFACE_CORETEMP;
+		if (!gkrellm_sys_sensors_get_temperature(mib_name, 0, 0,
+							 interface, NULL))
+			continue;
+		snprintf(label, sizeof(label), "node%d", id);
+		gkrellm_sensors_add_sensor(SENSOR_TEMPERATURE, NULL,
+					   mib_name, 0, 0,
+					   interface, 1.0, 0.0, NULL, label);
+		}
+
 
 	if (freebsd_sensor_list)
 		{
@@ -1044,13 +1096,7 @@ sensors_add_sensor(gint type, gchar *id_
 	sensor->factor = factor;
 	sensor->offset = offset;
 	sensor->default_label = default_label ? g_strdup(default_label) : NULL;
-	if (g_list_append(freebsd_sensor_list, sensor) == NULL) {
-		g_free(sensor->id_name);
-		if (sensor->default_label)
-			g_free(sensor->default_label);
-		g_free(sensor);
-		return FALSE;
-	}
+	freebsd_sensor_list = g_list_append(freebsd_sensor_list, sensor);
 	return TRUE;
 }
 
@@ -1078,7 +1124,7 @@ scan_for_sensors(void)
 						chip_dir, dentry->d_name);
 			if ((iodev = open(temp_file, O_RDWR)) == -1)
 				continue;
-			sprintf(id_name, "%s%3s", "temp", dentry->d_name + 3);
+			snprintf(id_name, sizeof(id_name), "%s%3s", "temp", dentry->d_name + 3);
 			interface = INTERFACE_SMB;
 			if (!gkrellm_sys_sensors_get_temperature(NULL, 0, iodev,
 					interface, NULL))
@@ -1122,7 +1168,7 @@ scan_for_sensors(void)
 				if (!gkrellm_sys_sensors_get_fan(NULL, id, iodev,
 						interface, NULL))
 					continue;
-				sprintf(id_name, "%s%d", "fan", id);
+				snprintf(id_name, sizeof(id_name), "%s%d", "fan", id);
 				sensors_add_sensor(SENSOR_FAN, id_name, id,
 						iodev, interface,
 						1.0 / (gfloat) fandiv[id], 0.0,
@@ -1134,7 +1180,7 @@ scan_for_sensors(void)
 			if (!gkrellm_sys_sensors_get_voltage(NULL, id, iodev,
 					interface, NULL))
 				continue;
-			sprintf(id_name, "%s%d", "in", id);
+			snprintf(id_name, sizeof(id_name), "%s%d", "in", id);
 			sensors_add_sensor(SENSOR_VOLTAGE, id_name, id,
 					iodev, interface,
 					voltdefault0[id].factor, 0.0,
