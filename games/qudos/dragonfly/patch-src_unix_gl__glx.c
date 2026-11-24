--- src/unix/gl_glx.c.orig
+++ src/unix/gl_glx.c
@@ -63,7 +63,7 @@
 #ifdef Joystick
 #if defined (__linux__)
 #include <linux/joystick.h>
-#elif defined (__FreeBSD__)
+#elif defined (__FreeBSD__) || defined (__DragonFly__)
 #include <sys/joystick.h>
 #endif
 #include <glob.h>
@@ -1201,7 +1201,7 @@
 	int		i, err;
 	glob_t		pglob;
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct joystick	j;
 #else
 	struct js_event	e;
@@ -1220,7 +1220,7 @@
 		default:
 			ri.Con_Printf(PRINT_ALL, "Error #%d while looking for joysticks\n", err);
 		}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		goto out;
 #else
 		return false;
@@ -1232,13 +1232,13 @@
 		if (joy_fd == -1) {
 			ri.Con_Printf(PRINT_ALL, "Error opening joystick dev %s\n",
 			    pglob.gl_pathv[i]);
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 			goto out;
 #else
 			return false;
 #endif
 		}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 		else if (read(joy_fd, &j, sizeof(struct joystick)) != -1) {
 #else
 		else {
@@ -1250,7 +1250,7 @@
 			return true;
 		}
 	}
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 out:
 #endif
 	globfree(&pglob);
@@ -1260,7 +1260,7 @@
 void
 PlatformJoyCommands(int *axis_vals, int *axis_map)
 {
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 	struct joystick	j;
 
 #else
@@ -1270,7 +1270,7 @@
 	int		key_index;
 	in_state_t     *in_state = getState();
 
-#ifdef __FreeBSD__
+#if defined(__FreeBSD__) || defined(__DragonFly__)
 
 	/*
 	 * FreeBSD does not fully support multi-buttoned joysticks.
