--- game/q_shared.c.orig
+++ game/q_shared.c
@@ -435,7 +435,7 @@
 Returns 1, 2, or 1 + 2
 ==================
 */
-#if !id386 || defined __linux__ || defined __FreeBSD__
+#if !id386 || defined __linux__ || defined __FreeBSD__ || defined __DragonFly__
 int EXPORT BoxOnPlaneSide (vec3_t emins, vec3_t emaxs, struct cplane_s *p)
 {
 	float	dist1, dist2;
