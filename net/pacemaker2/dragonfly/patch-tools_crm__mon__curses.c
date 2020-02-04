--- tools/crm_mon_curses.c.orig	2019-11-25 22:54:47 UTC
+++ tools/crm_mon_curses.c
@@ -297,7 +297,7 @@ curses_indented_vprintf(pcmk__output_t *
 
 G_GNUC_PRINTF(2, 3)
 void
-curses_indented_printf(pcmk__output_t *out, const char *format, va_list args) {
+curses_indented_printf(pcmk__output_t *out, const char *format, ...) {
     return;
 }
 
