--- src/sna/sna_display.c.orig	2014-09-08 06:31:57 UTC
+++ src/sna/sna_display.c
@@ -5343,7 +5343,7 @@ static bool sna_probe_initial_configurat
 			OPTION_ROTATE,
 			OPTION_PANNING,
 		};
-		if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE)) {
+		if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE) || 1) {
 			DBG(("%s: user requests reprobing\n", __FUNCTION__));
 			return false;
 		}
