--- src/uxa/uxa-render.c.orig
+++ src/uxa/uxa-render.c
@@ -906,12 +906,12 @@
 			       xRectangle *rects,
 			       int tx, int ty)
 {
-	pixman_box16_t stack_boxes[64], *boxes = stack_boxes;
+	pixman_box16_t stack_boxes[64] = { 0 }, *boxes = stack_boxes;
 	pixman_bool_t ret;
 	int i;
 
 	if (num_rects > sizeof(stack_boxes) / sizeof(stack_boxes[0])) {
-		boxes = malloc(sizeof(pixman_box16_t) * num_rects);
+		boxes = calloc(num_rects, sizeof(pixman_box16_t));
 		if (boxes == NULL)
 			return FALSE;
 	}
