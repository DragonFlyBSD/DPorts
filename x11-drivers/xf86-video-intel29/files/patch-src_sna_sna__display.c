--- src/sna/sna_display.c.orig	2014-03-18 15:55:13.000000000 +0000
+++ src/sna/sna_display.c
@@ -3297,7 +3297,7 @@ static bool sna_probe_initial_configurat
 
 	assert((sna->flags & SNA_IS_HOSTED) == 0);
 
-	if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE)) {
+	if (xf86ReturnOptValBool(sna->Options, OPTION_REPROBE, FALSE) || 1) {
 		DBG(("%s: user requests reprobing\n", __FUNCTION__));
 		return false;
 	}
