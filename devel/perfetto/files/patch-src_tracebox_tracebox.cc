--- src/tracebox/tracebox.cc.orig	2026-07-07 14:09:45 UTC
+++ src/tracebox/tracebox.cc
@@ -57,6 +57,37 @@ const Applet g_applets[]{
     {"websocket_bridge", WebsocketBridgeMain},
 };
 
+#if PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
+const char *freebsd_applets[] {
+	"dtrace_probe",
+};
+
+bool
+start_freebsd_applets(int tracedpid)
+{
+	std::string self_path = base::GetCurExecutablePath();
+
+	for (size_t i = 0; i < nitems(freebsd_applets); i++) {
+		printf("starting freebsd applet %s\n", freebsd_applets[i]);
+
+		base::Subprocess app({self_path, freebsd_applets[i]});
+
+		// Put app in the same process group as traced. Same
+		// reason (CTRL+C) but it's not worth creating a new group.
+		app.args.posix_proc_group_id = tracedpid;
+
+		base::Pipe app_sync_pipe = base::Pipe::Create();
+		int app_fd = *app_sync_pipe.wr;
+		base::SetEnv("TRACED_PROBES_NOTIFY_FD", std::to_string(app_fd));
+		app.args.preserve_fds.emplace_back(app_fd);
+
+		app.Start();
+		app_sync_pipe.wr.reset();
+	}
+	return true;
+}
+#endif
+
 void PrintUsage() {
   printf(R"(Welcome to Perfetto tracing!
 
@@ -196,6 +227,7 @@ int TraceboxMain(int argc, char** argv) {
     PERFETTO_FATAL("The tracing service failed unexpectedly. Check the logs");
 #endif
 
+#if !PERFETTO_BUILDFLAG(PERFETTO_OS_FREEBSD)
   base::Subprocess traced_probes(
       {self_path, "traced_probes", "--reset-ftrace"});
   // Put traced_probes in the same process group as traced. Same reason (CTRL+C)
@@ -246,6 +278,11 @@ int TraceboxMain(int argc, char** argv) {
   PERFETTO_ELOG(
       "Unsupported: linux.perf data source support (traced_perf) "
       "compiled-out.");
+#endif
+#else
+
+	if (!start_freebsd_applets(traced.pid()))
+		return 0;
 #endif
 
   perfetto_cmd.ConnectToServiceRunAndMaybeNotify();
