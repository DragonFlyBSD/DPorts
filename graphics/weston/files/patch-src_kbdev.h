--- /dev/null	2015-10-10 13:36:27 +0200
+++ src/kbdev.h
@@ -0,0 +1,48 @@
+/*
+ * Copyright (c) 2015  Imre Vadasz.  All Rights Reserved.
+ *
+ * Redistribution and use in source and binary forms, with or without
+ * modification, are permitted provided that the following conditions
+ * are met:
+ * 1. Redistributions of source code must retain the above copyright
+ *    notice, this list of conditions and the following disclaimer.
+ * 2. Redistributions in binary form must reproduce the above copyright
+ *    notice, this list of conditions and the following disclaimer in the
+ *    documentation and/or other materials provided with the distribution.
+ *
+ * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
+ * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
+ * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
+ * DISCLAIMED. IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
+ * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
+ * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
+ * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
+ * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
+ * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
+ * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
+ * SUCH DAMAGE.
+ */
+
+#ifndef _KBDEV_H_
+#define _KBDEV_H_
+
+struct kbdev_state;
+
+struct kbdev_event {
+	int keycode;	/* evdev compatible */
+	int pressed;	/* 0 -> key released; 1 -> key pressed */
+};
+
+int kbdev_set_leds(struct kbdev_state *state, int mask);
+int kbdev_get_leds(struct kbdev_state *state, int *mask);
+struct kbdev_state *kbdev_new_state(int fd);
+void kbdev_destroy_state(struct kbdev_state *state);
+void kbdev_reset_state(struct kbdev_state *state);
+
+/* The fd needs to be set to non-blocking before calling this function */
+int kbdev_read_events(struct kbdev_state *state, struct kbdev_event *out,
+		      int cnt);
+
+int kbdev_pop_pressed(struct kbdev_state *state, struct kbdev_event *out);
+
+#endif /* !_KBDEV_H_ */
