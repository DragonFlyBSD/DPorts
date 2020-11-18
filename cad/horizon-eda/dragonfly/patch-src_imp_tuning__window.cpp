--- src/imp/tuning_window.cpp.orig	2020-08-05 20:33:52 UTC
+++ src/imp/tuning_window.cpp
@@ -2,6 +2,7 @@
 #include "board/board.hpp"
 #include "util/util.hpp"
 #include <iomanip>
+#include <cmath> // for std::isnan()
 
 namespace horizon {
 TuningWindow::TuningWindow(const Board &brd) : Gtk::Window(), board(brd), state_store(this, "tuning")
@@ -136,7 +137,7 @@ TuningWindow::TuningWindow(const Board &
             ss << " " << std::fixed << std::setprecision(3) << std::setw(7) << std::setfill('0') << std::internal
                << row[list_columns.length_ps] << " ps";
             double delta_ps = row[list_columns.delta_ps];
-            if (!isnan(delta_ps)) {
+            if (!std::isnan(delta_ps)) {
                 ss << " Δ";
                 if (delta_ps >= 0) {
                     ss << "+";
