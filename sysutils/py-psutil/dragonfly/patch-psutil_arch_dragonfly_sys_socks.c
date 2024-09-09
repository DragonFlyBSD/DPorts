--- /dev/null
+++ psutil/arch/dragonfly/sys_socks.c
@@ -0,0 +1,315 @@
+/*
+ * Copyright (c) 2009, Giampaolo Rodola'.
+ * All rights reserved.
+ * Use of this source code is governed by a BSD-style license that can be
+ * found in the LICENSE file.
+ *
+ * Copyright (c) 2005 Joerg Sonnenberger <joerg@bec.de>.  All rights reserved.
+ * Copyright (c) 2002 Dag-Erling Coïdan Smørgrav
+ * All rights reserved.
+ *
+ */
+
+#include <Python.h>
+#include <sys/user.h>
+#include <sys/file.h>
+#include <sys/socketvar.h>    // for struct xsocket
+#include <sys/un.h>
+#include <sys/unpcb.h>
+#include <sys/sysctl.h>
+#include <netinet/in.h>   // for xinpcb struct
+#include <netinet/ip.h>
+#include <netinet/in_pcb.h>
+#include <netinet/tcp_var.h>   // for struct xtcpcb
+#include <arpa/inet.h>         // for inet_ntop()
+#include <kinfo.h>             /* For kinfo_get_files */
+
+#include "../../_psutil_common.h"
+#include "../../_psutil_posix.h"
+
+static struct kinfo_file *psutil_xfiles;
+static size_t psutil_nxfiles;
+
+#define HASHSIZE 1009
+static struct sock *sockhash[HASHSIZE];
+
+int
+psutil_populate_xfiles(void) {
+	if (kinfo_get_files(&psutil_xfiles, &psutil_nxfiles)) {
+		if (errno == ENOMEM)
+			PyErr_NoMemory();
+		else if (errno != ENOMEM)
+			PyErr_SetFromErrno(0);
+
+		return 0;
+	}
+
+	return 1;	/* Success */
+}
+
+struct kinfo_file *
+psutil_get_file_from_sock(void *sock) {
+	struct kinfo_file *xf;
+	int n;
+
+	for (xf = psutil_xfiles, n = 0; n < (int)psutil_nxfiles; ++n, ++xf) {
+		if (xf->f_data == sock)
+			return xf;
+	}
+	return NULL;
+}
+
+int psutil_gather_inet(int proto, PyObject *py_retlist)
+{
+	void *so_begin, *so_end;
+	struct xinpcb *xip;
+	struct xtcpcb *xtp;
+	struct inpcb *inp;
+	struct xsocket *so;
+	struct sock *sock;
+	const char *varname, *protoname;
+	size_t len;
+	void *buf;
+	int type;
+
+	PyObject *py_tuple = NULL;
+	PyObject *py_laddr = NULL;
+	PyObject *py_raddr = NULL;
+
+	switch (proto) {
+	case IPPROTO_TCP:
+		varname = "net.inet.tcp.pcblist";
+		protoname = "tcp";
+		break;
+	case IPPROTO_UDP:
+		varname = "net.inet.udp.pcblist";
+		protoname = "udp";
+		break;
+	default:
+		abort();
+	}
+
+	buf = NULL;
+	len = 0;
+
+	if (sysctlbyname(varname, NULL, &len, NULL, 0)) {
+		PyErr_SetFromErrno(0);
+		return 0;
+	}
+	if ((buf = malloc(len)) == NULL) {
+		PyErr_NoMemory();
+		return 0;
+	}
+	if (sysctlbyname(varname, buf, &len, NULL, 0)) {
+		PyErr_SetFromErrno(0);
+		return 0;
+	}
+
+	so_begin = buf;
+	so_end = (uint8_t *)buf + len;
+
+	for (so_begin = buf, so_end = (uint8_t *)so_begin + len;
+	     (uint8_t *)so_begin + sizeof(size_t) < (uint8_t *)so_end &&
+	     (uint8_t *)so_begin + *(size_t *)so_begin <= (uint8_t *)so_end;
+	     so_begin = (uint8_t *)so_begin + *(size_t *)so_begin) {
+		struct kinfo_file *xf;
+		int lport, rport, status, family;
+
+		switch (proto) {
+		case IPPROTO_TCP:
+			xtp = (struct xtcpcb *)so_begin;
+			if (xtp->xt_len != sizeof *xtp) {
+				PyErr_Format(PyExc_RuntimeError,
+				    "struct xtcpcb size mismatch");
+				goto error;
+			}
+			inp = &xtp->xt_inp;
+			so = &xtp->xt_socket;
+			break;
+		case IPPROTO_UDP:
+			xip = (struct xinpcb *)so_begin;
+			if (xip->xi_len != sizeof *xip) {
+				PyErr_Format(PyExc_RuntimeError,
+				    "struct xtcpcb size mismatch");
+				goto error;
+			}
+			inp = &xip->xi_inp;
+			so = &xip->xi_socket;
+			break;
+		default:
+			PyErr_Format(PyExc_RuntimeError, "invalid proto");
+			goto error;
+		}
+
+		char lip[200], rip[200];
+
+		xf = psutil_get_file_from_sock(so->xso_so);
+		if (xf == NULL)
+			continue;
+
+		lport = ntohs(inp->inp_lport);
+		rport = ntohs(inp->inp_fport);
+
+		if (INP_ISIPV4(inp)) {
+			family = AF_INET;
+			inet_ntop(AF_INET, &inp->inp_laddr.s_addr, lip, sizeof(lip));
+			inet_ntop(AF_INET, &inp->inp_faddr.s_addr, rip, sizeof(rip));
+		}
+		else if (INP_ISIPV6(inp)) {
+			family = AF_INET6;
+			inet_ntop(AF_INET6, &inp->in6p_laddr.s6_addr, lip, sizeof(lip));
+			inet_ntop(AF_INET6, &inp->in6p_faddr.s6_addr, rip, sizeof(rip));
+		}
+
+		// construct python tuple/list
+		py_laddr = Py_BuildValue("(si)", lip, lport);
+		if (!py_laddr)
+			goto error;
+		if (rport != 0)
+			py_raddr = Py_BuildValue("(si)", rip, rport);
+		else
+			py_raddr = Py_BuildValue("()");
+		if (!py_raddr)
+			goto error;
+		py_tuple = Py_BuildValue(
+			"iiiNNi" _Py_PARSE_PID,
+			    xf->f_fd, // fd
+			    family,    // family
+			    type,      // type
+			    py_laddr,  // laddr
+			    py_raddr,  // raddr
+			    status,    // status
+			    xf->f_pid // pid
+			);
+		if (!py_tuple)
+			goto error;
+		if (PyList_Append(py_retlist, py_tuple))
+			goto error;
+		Py_CLEAR(py_tuple);
+
+	}
+
+error:
+    Py_XDECREF(py_tuple);
+    Py_XDECREF(py_laddr);
+    Py_XDECREF(py_raddr);
+    free(buf);
+    return 0;
+}
+
+
+int psutil_gather_unix(int proto, PyObject *py_retlist) {
+	void *so_begin, *so_end;
+	struct xunpcb *xup;
+	const char *varname, *protoname;
+	size_t len;
+	void *buf;
+	struct sockaddr_un *sun;
+	char path[PATH_MAX];
+
+	PyObject *py_tuple = NULL;
+	PyObject *py_lpath = NULL;
+
+	switch (proto) {
+        case SOCK_STREAM:
+		varname = "net.local.stream.pcblist";
+		protoname = "stream";
+		break;
+        case SOCK_DGRAM:
+		varname = "net.local.dgram.pcblist";
+		protoname = "dgram";
+		break;
+	}
+	buf = NULL;
+	len = 0;
+
+	if (sysctlbyname(varname, NULL, &len, NULL, 0)) {
+		PyErr_SetFromErrno(0);
+		return 0;
+	}
+	if ((buf = malloc(len)) == NULL) {
+		PyErr_NoMemory();
+		return 0;
+	}
+	if (sysctlbyname(varname, buf, &len, NULL, 0)) {
+		PyErr_SetFromErrno(0);
+		return 0;
+	}
+
+	for (so_begin = buf, so_end = (uint8_t *)buf + len;
+	     (uint8_t *)so_begin + sizeof(size_t) < (uint8_t *)so_end &&
+	     (uint8_t *)so_begin + *(size_t *)so_begin <= (uint8_t *)so_end;
+	     so_begin = (uint8_t *)so_begin + *(size_t *)so_begin) {
+		struct kinfo_file *xf;
+
+		xup = so_begin;
+		if (xup->xu_len != sizeof *xup) {
+			PyErr_Format(PyExc_RuntimeError,
+			    "struct xtcpcb size mismatch");
+			goto error;
+		}
+
+		xf = psutil_get_file_from_sock(xup->xu_socket.xso_so);
+		if (xf == NULL)
+			continue;
+
+		sun = (struct sockaddr_un *)&xup->xu_addr;
+		snprintf(path, sizeof(path), "%.*s",
+		    (int)(sun->sun_len - (sizeof(*sun) - sizeof(sun->sun_path))),
+		    sun->sun_path);
+		py_lpath = PyUnicode_DecodeFSDefault(path);
+		if (! py_lpath)
+			goto error;
+
+		py_tuple = Py_BuildValue("(iiiOsii)",
+		    xf->f_fd,         // fd
+		    AF_UNIX,           // family
+		    proto,             // type
+		    py_lpath,          // lpath
+		    "",                // rath
+		    PSUTIL_CONN_NONE,  // status
+		    xf->f_pid);       // pid
+		if (!py_tuple)
+			goto error;
+		if (PyList_Append(py_retlist, py_tuple))
+			goto error;
+		Py_DECREF(py_lpath);
+		Py_DECREF(py_tuple);
+	}
+
+	free(buf);
+	return 1;
+
+error:
+	Py_XDECREF(py_tuple);
+	Py_XDECREF(py_lpath);
+	free(buf);
+	return 0;
+}
+
+PyObject*
+psutil_net_connections(PyObject* self, PyObject* args) {
+    // Return system-wide open connections.
+    PyObject *py_retlist = PyList_New(0);
+
+    if (py_retlist == NULL)
+        return NULL;
+    if (psutil_populate_xfiles() != 1)
+        goto error;
+    if (psutil_gather_inet(IPPROTO_TCP, py_retlist) == 0)
+        goto error;
+    if (psutil_gather_inet(IPPROTO_UDP, py_retlist) == 0)
+        goto error;
+    if (psutil_gather_unix(SOCK_STREAM, py_retlist) == 0)
+       goto error;
+    if (psutil_gather_unix(SOCK_DGRAM, py_retlist) == 0)
+        goto error;
+
+    free(psutil_xfiles);
+    return py_retlist;
+
+error:
+    Py_DECREF(py_retlist);
+    free(psutil_xfiles);
+    return NULL;
+}
diff --git psutil/arch/dragonfly/sys_socks.h psutil/arch/dragonfly/sys_socks.h
new file mode 100644
index 00000000..75247926
