--- src/core/tools/tool_round_off_vertex.cpp.orig	2020-08-05 20:33:52 UTC
+++ src/core/tools/tool_round_off_vertex.cpp
@@ -6,6 +6,7 @@
 #include "util/selection_util.hpp"
 #include "clipper/clipper.hpp"
 #include "dialogs/enter_datum_window.hpp"
+#include <cmath> // for std::isnan()
 
 namespace horizon {
 
@@ -66,7 +67,7 @@ ToolResponse ToolRoundOffVertex::begin(c
     delta_max = sqrt(std::min((poly->vertices.at(v_next).position - poly->vertices.at(vertex_idx).position).mag_sq(),
                               (poly->vertices.at(v_prev).position - poly->vertices.at(vertex_idx).position).mag_sq()));
     alpha = acos(vh.dot(vp));
-    if (isnan(alpha) || (alpha > .99 * (M_PI / 2))) {
+    if (std::isnan(alpha) || (alpha > .99 * (M_PI / 2))) {
         imp->tool_bar_flash("can't round off collinear edges");
         return ToolResponse::end();
     }
