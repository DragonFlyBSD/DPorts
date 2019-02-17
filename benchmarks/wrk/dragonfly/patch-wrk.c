--- src/wrk.c.orig
+++ src/wrk.c
@@ -4,15 +4,28 @@
 #include "script.h"
 #include "main.h"
 
+#if defined(__FreeBSD__)
+#include <sys/cpuset.h>
+#include <sys/sysctl.h>
+#include <pthread_np.h>
+#elif defined(__DragonFly__)
+#include <sys/sysctl.h>
+#include <pthread_np.h>
+#endif
+
+
 static struct config {
     uint64_t connections;
     uint64_t duration;
     uint64_t threads;
     uint64_t timeout;
     uint64_t pipeline;
+    uint64_t connreqs;
     bool     delay;
     bool     dynamic;
     bool     latency;
+    bool     tcp_nodelay;
+    bool     bind_cpu;
     char    *host;
     char    *script;
     SSL_CTX *ctx;
@@ -44,8 +57,11 @@ static void handler(int sig) {
 static void usage() {
     printf("Usage: wrk <options> <url>                            \n"
            "  Options:                                            \n"
+           "    -B, --bindcpu          Bind threads to CPUs       \n"
            "    -c, --connections <N>  Connections to keep open   \n"
+           "    -C, --connreqs    <N>  Max number of requests per connection\n"
            "    -d, --duration    <T>  Duration of test           \n"
+           "    -N, --delay            Disable TCP_NODELAY        \n"
            "    -t, --threads     <N>  Number of threads to use   \n"
            "                                                      \n"
            "    -s, --script      <S>  Load Lua script file       \n"
@@ -61,6 +77,10 @@ static void usage() {
 int main(int argc, char **argv) {
     char *url, **headers = zmalloc(argc * sizeof(char *));
     struct http_parser_url parts = {};
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+    int ncpus;
+    size_t len;
+#endif
 
     if (parse_args(&cfg, &url, &parts, headers, argc, argv)) {
         usage();
@@ -99,9 +119,26 @@ int main(int argc, char **argv) {
         exit(1);
     }
 
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+    len = sizeof(ncpus);
+    if (sysctlbyname("hw.ncpu", &ncpus, &len, NULL, 0)) {
+        fprintf(stderr, "sysctlbyname hw.ncpu failed: %s\n", strerror(errno));
+        exit(1);
+    }
+#endif
+
     cfg.host = host;
 
     for (uint64_t i = 0; i < cfg.threads; i++) {
+        pthread_attr_t attr;
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+#ifdef __FreeBSD__
+        cpuset_t mask;
+#else
+        cpu_set_t mask;
+#endif
+        int cpu, error;
+#endif
         thread *t      = &threads[i];
         t->loop        = aeCreateEventLoop(10 + cfg.connections * 3);
         t->connections = cfg.connections / cfg.threads;
@@ -120,11 +157,28 @@ int main(int argc, char **argv) {
             }
         }
 
-        if (!t->loop || pthread_create(&t->thread, NULL, &thread_main, t)) {
+        pthread_attr_init(&attr);
+        if (cfg.bind_cpu) {
+#if defined(__FreeBSD__) || defined(__DragonFly__)
+            CPU_ZERO(&mask);
+            cpu = i % ncpus;
+            CPU_SET(cpu, &mask);
+            error = pthread_attr_setaffinity_np(&attr, sizeof(mask), &mask);
+            if (error) {
+                fprintf(stderr, "pthread_attr_setaffinity_np(cpu%d) failed: "
+                    "%s\n", cpu, strerror(error));
+                exit(1);
+            }
+#endif
+        }
+
+        t->requests = i; /* XXX steal requests as thread id */
+        if (!t->loop || pthread_create(&t->thread, &attr, &thread_main, t)) {
             char *msg = strerror(errno);
             fprintf(stderr, "unable to create thread %"PRIu64": %s\n", i, msg);
             exit(2);
         }
+        pthread_attr_destroy(&attr);
     }
 
     struct sigaction sa = {
@@ -136,7 +190,14 @@ int main(int argc, char **argv) {
 
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
@@ -204,6 +265,15 @@ void *thread_main(void *arg) {
 
     char *request = NULL;
     size_t length = 0;
+    char name[16];
+
+    snprintf(name, sizeof(name), "wrkt%zd", thread->requests);
+    thread->requests = 0;
+#ifdef __linux__
+    pthread_setname_np(pthread_self(), name);
+#elif defined(__FreeBSD__) || defined(__DragonFly__)
+    pthread_set_name_np(pthread_self(), name);
+#endif
 
     if (!cfg.dynamic) {
         script_request(thread->L, &request, &length);
@@ -238,17 +308,29 @@ static int connect_socket(thread *thread, connection *c) {
     struct aeEventLoop *loop = thread->loop;
     int fd, flags;
 
-    fd = socket(addr->ai_family, addr->ai_socktype, addr->ai_protocol);
+    c->requests = 0;
 
+#ifdef SOCK_NONBLOCK
+    fd = socket(addr->ai_family, addr->ai_socktype | SOCK_NONBLOCK, addr->ai_protocol);
+#else	/* !SOCK_NONBLOCK */
+    fd = socket(addr->ai_family, addr->ai_socktype, addr->ai_protocol);
+#ifdef FIONBIO
+    flags = 1;
+    ioctl(fd, FIONBIO, &flags, sizeof(flags));
+#else
     flags = fcntl(fd, F_GETFL, 0);
     fcntl(fd, F_SETFL, flags | O_NONBLOCK);
+#endif
+#endif	/* SOCK_NONBLOCK */
 
     if (connect(fd, addr->ai_addr, addr->ai_addrlen) == -1) {
         if (errno != EINPROGRESS) goto error;
     }
 
-    flags = 1;
-    setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &flags, sizeof(flags));
+    if (cfg.tcp_nodelay) {
+        flags = 1;
+        setsockopt(fd, IPPROTO_TCP, TCP_NODELAY, &flags, sizeof(flags));
+    }
 
     flags = AE_READABLE | AE_WRITABLE;
     if (aeCreateFileEvent(loop, fd, flags, socket_connected, c) == AE_OK) {
@@ -264,7 +346,7 @@ static int connect_socket(thread *thread, connection *c) {
 }
 
 static int reconnect_socket(thread *thread, connection *c) {
-    aeDeleteFileEvent(thread->loop, c->fd, AE_WRITABLE | AE_READABLE);
+    aeCloseFileEvent(thread->loop, c->fd, AE_WRITABLE | AE_READABLE);
     sock.close(c);
     close(c->fd);
     return connect_socket(thread, c);
@@ -348,7 +430,8 @@ static int response_complete(http_parser *parser) {
         aeCreateFileEvent(thread->loop, c->fd, AE_WRITABLE, socket_writeable, c);
     }
 
-    if (!http_should_keep_alive(parser)) {
+    c->requests++;
+    if (!http_should_keep_alive(parser) || c->requests >= cfg.connreqs) {
         reconnect_socket(thread, c);
         goto done;
     }
@@ -476,6 +559,9 @@ static struct option longopts[] = {
     { "timeout",     required_argument, NULL, 'T' },
     { "help",        no_argument,       NULL, 'h' },
     { "version",     no_argument,       NULL, 'v' },
+    { "connreqs",    required_argument, NULL, 'C' },
+    { "delay",       no_argument,       NULL, 'N' },
+    { "bindcpu",     no_argument,       NULL, 'B' },
     { NULL,          0,                 NULL,  0  }
 };
 
@@ -488,8 +574,10 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
     cfg->connections = 10;
     cfg->duration    = 10;
     cfg->timeout     = SOCKET_TIMEOUT_MS;
+    cfg->connreqs    = UINT64_MAX;
+    cfg->tcp_nodelay = true;
 
-    while ((c = getopt_long(argc, argv, "t:c:d:s:H:T:Lrv?", longopts, NULL)) != -1) {
+    while ((c = getopt_long(argc, argv, "t:c:d:s:C:H:T:BLNrv?", longopts, NULL)) != -1) {
         switch (c) {
             case 't':
                 if (scan_metric(optarg, &cfg->threads)) return -1;
@@ -517,6 +605,15 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
                 printf("wrk %s [%s] ", VERSION, aeGetApiName());
                 printf("Copyright (C) 2012 Will Glozer\n");
                 break;
+            case 'B':
+                cfg->bind_cpu = true;
+                break;
+            case 'C':
+                if (scan_metric(optarg, &cfg->connreqs)) return -1;
+                break;
+            case 'N':
+                cfg->tcp_nodelay = false;
+                break;
             case 'h':
             case '?':
             case ':':
@@ -532,11 +629,15 @@ static int parse_args(struct config *cfg, char **url, struct http_parser_url *pa
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
 
