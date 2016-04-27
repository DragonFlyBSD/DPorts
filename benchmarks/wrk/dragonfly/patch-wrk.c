--- src/wrk.c.orig
+++ src/wrk.c
@@ -10,6 +10,7 @@ static struct config {
     uint64_t threads;
     uint64_t timeout;
     uint64_t pipeline;
+    uint64_t connreqs;
     bool     delay;
     bool     dynamic;
     bool     latency;
@@ -45,6 +46,7 @@ static void usage() {
     printf("Usage: wrk <options> <url>                            \n"
            "  Options:                                            \n"
            "    -c, --connections <N>  Connections to keep open   \n"
+           "        --connreqs    <N>  Max number of requests per connection\n"
            "    -d, --duration    <T>  Duration of test           \n"
            "    -t, --threads     <N>  Number of threads to use   \n"
            "                                                      \n"
@@ -136,7 +138,14 @@ int main(int argc, char **argv) {
 
     char *time = format_time_s(cfg.duration);
     printf("Running %s test @ %s\n", time, url);
-    printf("  %"PRIu64" threads and %"PRIu64" connections\n", cfg.threads, cfg.connections);
+    if (cfg.connreqs == UINT64_MAX) {
+        printf("  %"PRIu64" threads and %"PRIu64" connections\n",
+            cfg.threads, cfg.connections);
+    } else {
+        printf("  %"PRIu64" threads and %"PRIu64" connections, "
+            "%"PRIu64" requests/connection\n",
+            cfg.threads, cfg.connections, cfg.connreqs);
+    }
 
     uint64_t start    = time_us();
     uint64_t complete = 0;
@@ -238,6 +247,8 @@ static int connect_socket(thread *thread, connection *c) {
     struct aeEventLoop *loop = thread->loop;
     int fd, flags;
 
+    c->requests = 0;
+
     fd = socket(addr->ai_family, addr->ai_socktype, addr->ai_protocol);
 
     flags = fcntl(fd, F_GETFL, 0);
@@ -348,7 +359,8 @@ static int response_complete(http_parser *parser) {
         aeCreateFileEvent(thread->loop, c->fd, AE_WRITABLE, socket_writeable, c);
     }
 
-    if (!http_should_keep_alive(parser)) {
+    c->requests++;
+    if (!http_should_keep_alive(parser) || c->requests >= cfg.connreqs) {
         reconnect_socket(thread, c);
         goto done;
     }
@@ -476,6 +488,7 @@ static struct option longopts[] = {
     { "timeout",     required_argument, NULL, 'T' },
     { "help",        no_argument,       NULL, 'h' },
     { "version",     no_argument,       NULL, 'v' },
+    { "connreqs",    required_argument, NULL, 'C' },
     { NULL,          0,                 NULL,  0  }
 };
 
@@ -488,6 +501,7 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
     cfg->connections = 10;
     cfg->duration    = 10;
     cfg->timeout     = SOCKET_TIMEOUT_MS;
+    cfg->connreqs    = UINT64_MAX;
 
     while ((c = getopt_long(argc, argv, "t:c:d:s:H:T:Lrv?", longopts, NULL)) != -1) {
         switch (c) {
@@ -517,6 +531,9 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
                 printf("wrk %s [%s] ", VERSION, aeGetApiName());
                 printf("Copyright (C) 2012 Will Glozer\n");
                 break;
+            case 'C':
+                if (scan_metric(optarg, &cfg->connreqs)) return -1;
+                break;
             case 'h':
             case '?':
             case ':':
@@ -532,11 +549,15 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
         return -1;
     }
 
-    if (!cfg->connections || cfg->connections < cfg->threads) {
-        fprintf(stderr, "number of connections must be >= threads\n");
+    if (!cfg->connections) {
+        fprintf(stderr, "number of connections is 0\n");
         return -1;
     }
 
+    if (cfg->connections < cfg->threads) {
+        cfg->threads = cfg->connections;
+    }
+
     *url    = argv[optind];
     *header = NULL;
 
