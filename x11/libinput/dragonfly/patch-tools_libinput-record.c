--- tools/libinput-record.c.orig	2019-05-13 15:17:52.426584000 +0300
+++ tools/libinput-record.c	2019-05-16 12:14:38.170147000 +0300
@@ -28,7 +28,13 @@
 #include <linux/input.h>
 #include <libevdev/libevdev.h>
 #include <libudev.h>
+#if defined(__DragonFly__)
+#include <sys/types.h>
+#include <sys/event.h>
+#include <sys/time.h>
+#else
 #include <sys/signalfd.h>
+#endif
 #include <sys/utsname.h>
 #include <sys/stat.h>
 #include <string.h>
@@ -1933,6 +1939,233 @@ print_progress_bar(void)
 	fprintf(stderr, "\rReceiving events: [%*s%*s]", foo, "*", 21 - foo, " ");
 }
 
+#if defined(__DragonFly__)
+static int
+mainloop(struct record_context *ctx)
+{
+	bool autorestart = (ctx->timeout > 0);
+	unsigned int nfds = 0;
+	struct record_device *d = NULL;
+	struct record_device *first_device = NULL;
+	struct timespec ts;
+	sigset_t mask;
+	int kq, nev;
+	struct kevent change[ctx->ndevices + 3];
+	struct kevent events[ctx->ndevices + 3];
+	int dfly_fds[ctx->ndevices + 3];
+
+	assert(ctx->timeout != 0);
+	assert(!list_empty(&ctx->devices));
+
+	sigemptyset(&mask);
+	sigaddset(&mask, SIGINT);
+	sigaddset(&mask, SIGQUIT);
+	sigprocmask(SIG_BLOCK, &mask, NULL);
+
+	kq = kqueue();
+	if (kq == -1) {
+		fprintf(stderr, "Error initializing kqueue: %s\n",
+		        strerror(errno));
+		return (EXIT_FAILURE);
+	}
+
+	EV_SET(&change[0], SIGINT, EVFILT_SIGNAL, EV_ADD | EV_ENABLE, 0, 0,
+	       NULL);
+	EV_SET(&change[1], SIGQUIT, EVFILT_SIGNAL, EV_ADD | EV_ENABLE, 0, 0,
+	       NULL);
+
+	nfds = nfds + 2;
+	dfly_fds[0] = 0;
+	dfly_fds[1] = 0;
+
+	if (ctx->libinput) {
+		dfly_fds[2] = libinput_get_fd(ctx->libinput);
+		EV_SET(&change[2], dfly_fds[2], EVFILT_READ, EV_ADD | EV_ENABLE,
+		       0, 0, NULL);
+		nfds++;
+		assert(nfds == 3);
+	}
+
+	list_for_each(d, &ctx->devices, link) {
+		dfly_fds[nfds] = libevdev_get_fd(d->evdev);
+		EV_SET(&change[nfds], dfly_fds[nfds], EVFILT_READ,
+		       EV_ADD | EV_ENABLE, 0, 0, NULL);
+		assert(dfly_fds[nfds] != -1);
+		nfds++;
+	}
+
+	if (kevent(kq, change, nfds, NULL, 0, NULL) == -1) {
+		fprintf(stderr, "Error adding events: %s\n", strerror(errno));
+		close(kq);
+		return (EXIT_FAILURE);
+	}
+
+	/* If we have more than one device, the time starts at recording
+	 * start time. Otherwise, the first event starts the recording time.
+	 */
+	if (ctx->ndevices > 1) {
+		clock_gettime(CLOCK_MONOTONIC, &ts);
+		ctx->offset = s2us(ts.tv_sec) + ns2us(ts.tv_nsec);
+	}
+
+	do {
+		int rc;
+		bool had_events = false; /* we delete files without events */
+
+		if (!open_output_file(ctx, autorestart)) {
+			fprintf(stderr,
+				"Failed to open '%s'\n",
+				ctx->output_file);
+			break;
+		}
+		fprintf(stderr, "Recording to '%s'.\n", ctx->output_file);
+
+		print_header(ctx);
+		if (autorestart)
+			iprintf(ctx,
+				"# Autorestart timeout: %d\n",
+				ctx->timeout);
+
+		iprintf(ctx, "devices:\n");
+		indent_push(ctx);
+
+		/* we only print the first device's description, the
+		 * rest is assembled after CTRL+C */
+		first_device = list_first_entry(&ctx->devices,
+						first_device,
+						link);
+		print_device_description(ctx, first_device);
+
+		iprintf(ctx, "events:\n");
+		indent_push(ctx);
+
+		if (ctx->libinput) {
+			size_t count;
+			libinput_dispatch(ctx->libinput);
+			count = handle_libinput_events(ctx, first_device);
+			print_cached_events(ctx, first_device, 0, count);
+		}
+
+		struct timespec kq_timeout_value;
+		struct timespec* kq_timeout;
+		if (ctx->timeout < 0) {
+			kq_timeout = NULL;
+		} else {
+			kq_timeout_value.tv_sec = ctx->timeout / 1000;
+			kq_timeout_value.tv_nsec = (ctx->timeout % 1000) * 1000000L;
+			kq_timeout = &kq_timeout_value;
+		}
+
+		for (;;) {
+			nev = kevent(kq, NULL, 0, events, nfds, kq_timeout);
+			if (nev == -1) { /* error */
+				fprintf(stderr, "Error: %s\n", strerror(errno));
+				autorestart = false;
+				break;
+			} else if (nev == 0) {
+				fprintf(stderr,
+					" ... timeout%s\n",
+					had_events ? "" : " (file is empty)");
+				break;
+			} else if (nev > 0) { /* signal */
+				for (int i = 0; i < nev; i++) {
+					if ((events[i].filter == EVFILT_SIGNAL) &&
+					    (events[i].data > 0)) {
+						autorestart = false;
+						goto next;
+					}
+				}
+			}
+
+			/* Pull off the evdev events first since they cause
+			 * libinput events.
+			 * handle_events de-queues libinput events so by the
+			 * time we finish that, we hopefully have all evdev
+			 * events and libinput events roughly in sync.
+			 */
+			had_events = true;
+			list_for_each(d, &ctx->devices, link)
+				handle_events(ctx, d, d == first_device);
+
+			if (ctx->libinput) {
+				for (int i = 0; i < nev; i++) {
+					if ((events[i].flags == EV_EOF) ||
+					    (events[i].flags == EV_ERROR))
+						break; /* XXX error */
+					if ((events[i].filter == EVFILT_READ) &&
+					    (events[i].ident == dfly_fds[2])) {
+						/* This shouldn't pull any events off unless caused
+						 * by libinput-internal timeouts (e.g. tapping) */
+						size_t count, offset;
+
+						libinput_dispatch(ctx->libinput);
+						offset = first_device->nevents;
+						count = handle_libinput_events(ctx,
+									       first_device);
+						if (count) {
+							print_cached_events(ctx,
+									    first_device,
+									    offset,
+									    count);
+						}
+						rc--;
+
+						/* nothing more todo */
+						break;
+					}
+				}
+			}
+
+			if (ctx->out_fd != STDOUT_FILENO)
+				print_progress_bar();
+
+		}
+next:
+		indent_pop(ctx); /* events: */
+
+		if (autorestart) {
+			noiprintf(ctx,
+				  "# Closing after %ds inactivity",
+				  ctx->timeout/1000);
+		}
+
+		/* First device is printed, now append all the data from the
+		 * other devices, if any */
+		list_for_each(d, &ctx->devices, link) {
+			if (d == list_first_entry(&ctx->devices, d, link))
+				continue;
+
+			print_device_description(ctx, d);
+			iprintf(ctx, "events:\n");
+			indent_push(ctx);
+			print_cached_events(ctx, d, 0, -1);
+			indent_pop(ctx);
+		}
+
+		indent_pop(ctx); /* devices: */
+		assert(ctx->indent == 0);
+
+		fsync(ctx->out_fd);
+
+		/* If we didn't have events, delete the file. */
+		if (!isatty(ctx->out_fd)) {
+			if (!had_events && ctx->output_file) {
+				fprintf(stderr, "No events recorded, deleting '%s'\n", ctx->output_file);
+				unlink(ctx->output_file);
+			}
+
+			close(ctx->out_fd);
+			ctx->out_fd = -1;
+		}
+		free(ctx->output_file);
+		ctx->output_file = NULL;
+	} while (autorestart);
+
+	sigprocmask(SIG_UNBLOCK, &mask, NULL);
+
+	return 0;
+}
+#else  /* Linux, FreeBSD */
 static int
 mainloop(struct record_context *ctx)
 {
@@ -2114,6 +2347,7 @@ mainloop(struct record_context *ctx)
 
 	return 0;
 }
+#endif
 
 static inline bool
 init_device(struct record_context *ctx, char *path)
