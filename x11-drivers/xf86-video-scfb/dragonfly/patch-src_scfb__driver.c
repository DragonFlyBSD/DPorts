--- src/scfb_driver.c.intermediate	2018-01-14 17:19:15
+++ src/scfb_driver.c
@@ -81,19 +81,11 @@
 
 #include "compat-api.h"
 
+#define SCFB_LOG_VERBOSE	4
+
 #undef	DEBUG
 #define	DEBUG	1
 
-#if DEBUG
-# define TRACE_ENTER(str)	ErrorF("scfb: " str " %d\n",pScrn->scrnIndex)
-# define TRACE_EXIT(str)	ErrorF("scfb: " str " done\n")
-# define TRACE(str)		ErrorF("scfb trace: " str "\n")
-#else
-# define TRACE_ENTER(str)
-# define TRACE_EXIT(str)
-# define TRACE(str)
-#endif
-
 /* Prototypes */
 static pointer ScfbSetup(pointer, pointer, int *, int *);
 static Bool ScfbGetRec(ScrnInfoPtr);
@@ -102,16 +94,17 @@
 static void ScfbIdentify(int);
 static Bool ScfbProbe(DriverPtr, int);
 static Bool ScfbPreInit(ScrnInfoPtr, int);
-static Bool ScfbScreenInit(SCREEN_INIT_ARGS_DECL);
-static Bool ScfbCloseScreen(CLOSE_SCREEN_ARGS_DECL);
+static Bool ScfbScreenInit(ScreenPtr, int, char **);
+static Bool ScfbCloseScreen(ScreenPtr);
 static void *ScfbWindowLinear(ScreenPtr, CARD32, CARD32, int, CARD32 *,
 			      void *);
-static void ScfbPointerMoved(SCRN_ARG_TYPE, int, int);
-static Bool ScfbEnterVT(VT_FUNC_ARGS_DECL);
-static void ScfbLeaveVT(VT_FUNC_ARGS_DECL);
-static Bool ScfbSwitchMode(SWITCH_MODE_ARGS_DECL);
-static int ScfbValidMode(SCRN_ARG_TYPE, DisplayModePtr, Bool, int);
+static void ScfbPointerMoved(ScrnInfoPtr, int, int);
+static Bool ScfbEnterVT(ScrnInfoPtr);
+static void ScfbLeaveVT(ScrnInfoPtr);
+static Bool ScfbSwitchMode(ScrnInfoPtr, DisplayModePtr);
+static int ScfbValidMode(ScrnInfoPtr, DisplayModePtr, Bool, int);
 static void ScfbLoadPalette(ScrnInfoPtr, int, int *, LOCO *, VisualPtr);
+static void ScfbDPMSSet(ScrnInfoPtr, int, int);
 static Bool ScfbSaveScreen(ScreenPtr, int);
 static void ScfbSave(ScrnInfoPtr);
 static void ScfbRestore(ScrnInfoPtr);
@@ -232,7 +225,7 @@
 	void *			shadow;
 	CloseScreenProcPtr	CloseScreen;
 	CreateScreenResourcesProcPtr CreateScreenResources;
-	void			(*PointerMoved)(SCRN_ARG_TYPE, int, int);
+	void			(*PointerMoved)(ScrnInfoPtr, int, int);
 	EntityInfoPtr		pEnt;
 
 #ifdef XFreeXDGA
@@ -318,7 +311,9 @@
 	struct fbtype fb;
 	Bool foundScreen = FALSE;
 
-	TRACE("probe start");
+#if DEBUG
+	ErrorF("scfb: ScfbProbe start\n");
+#endif
 
 	/* For now, just bail out for PROBE_DETECT. */
 	if (flags & PROBE_DETECT)
@@ -358,7 +353,6 @@
 		}
 	}
 	free(devSections);
-	TRACE("probe done");
 	return foundScreen;
 }
 
@@ -376,7 +370,8 @@
 
 	if (flags & PROBE_DETECT) return FALSE;
 
-	TRACE_ENTER("PreInit");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbPreInit\n");
 
 	if (pScrn->numEntities != 1) return FALSE;
 
@@ -591,7 +586,8 @@
 		ScfbFreeRec(pScrn);
 		return FALSE;
 	}
-	TRACE_EXIT("PreInit");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbPreInit done\n");
 	return TRUE;
 }
 
@@ -636,7 +632,7 @@
 }
 
 static Bool
-ScfbScreenInit(SCREEN_INIT_ARGS_DECL)
+ScfbScreenInit(ScreenPtr pScreen, int argc, char **argv)
 {
 	ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
 	ScfbPtr fPtr = SCFBPTR(pScrn);
@@ -644,7 +640,8 @@
 	int ret, flags, ncolors;
 	size_t len;
 
-	TRACE_ENTER("ScfbScreenInit");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbScreenInit\n");
 #if DEBUG
 	ErrorF("\tbitsPerPixel=%d, depth=%d, defaultVisual=%s\n"
 	       "\tmask: %x,%x,%x, offset: %u,%u,%u\n",
@@ -800,6 +797,10 @@
 		return FALSE;
 	}
 
+	/* Init DPMS */
+	xf86DrvMsg(pScrn->scrnIndex, X_INFO, "Initializing DPMS\n");
+	xf86DPMSInit(pScreen, ScfbDPMSSet, 0);
+
 #ifdef XFreeXDGA
 	if (!fPtr->rotate)
 		ScfbDGAInit(pScrn, pScreen);
@@ -855,19 +856,20 @@
 	fPtr->CloseScreen = pScreen->CloseScreen;
 	pScreen->CloseScreen = ScfbCloseScreen;
 
-	TRACE_EXIT("ScfbScreenInit");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbScreenInit done\n");
 	return TRUE;
 }
 
 static Bool
-ScfbCloseScreen(CLOSE_SCREEN_ARGS_DECL)
+ScfbCloseScreen(ScreenPtr pScreen)
 {
 	ScrnInfoPtr pScrn = xf86ScreenToScrn(pScreen);
 	PixmapPtr pPixmap;
 	ScfbPtr fPtr = SCFBPTR(pScrn);
 
-
-	TRACE_ENTER("ScfbCloseScreen");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbCloseScreen\n");
 
 	pPixmap = pScreen->GetScreenPixmap(pScreen);
 	if (fPtr->shadowFB)
@@ -893,8 +895,9 @@
 
 	/* Unwrap CloseScreen. */
 	pScreen->CloseScreen = fPtr->CloseScreen;
-	TRACE_EXIT("ScfbCloseScreen");
-	return (*pScreen->CloseScreen)(CLOSE_SCREEN_ARGS);
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbCloseScreen done\n");
+	return (*pScreen->CloseScreen)(pScreen);
 }
 
 static void *
@@ -909,9 +912,8 @@
 }
 
 static void
-ScfbPointerMoved(SCRN_ARG_TYPE arg, int x, int y)
+ScfbPointerMoved(ScrnInfoPtr pScrn, int x, int y)
 {
-    SCRN_INFO_PTR(arg);
     ScfbPtr fPtr = SCFBPTR(pScrn);
     int newX, newY;
 
@@ -943,50 +945,40 @@
     }
 
     /* Pass adjusted pointer coordinates to wrapped PointerMoved function. */
-    (*fPtr->PointerMoved)(arg, newX, newY);
+    (*fPtr->PointerMoved)(pScrn, newX, newY);
 }
 
 static Bool
-ScfbEnterVT(VT_FUNC_ARGS_DECL)
+ScfbEnterVT(ScrnInfoPtr pScrn)
 {
-	SCRN_INFO_PTR(arg);
-
-	TRACE_ENTER("EnterVT");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbEnterVT\n");
 	pScrn->vtSema = TRUE;
-	TRACE_EXIT("EnterVT");
 	return TRUE;
 }
 
 static void
-ScfbLeaveVT(VT_FUNC_ARGS_DECL)
+ScfbLeaveVT(ScrnInfoPtr pScrn)
 {
-#if DEBUG
-	SCRN_INFO_PTR(arg);
-#endif
-
-	TRACE_ENTER("LeaveVT");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbLeaveVT\n");
 }
 
 static Bool
-ScfbSwitchMode(SWITCH_MODE_ARGS_DECL)
+ScfbSwitchMode(ScrnInfoPtr pScrn, DisplayModePtr mode)
 {
-#if DEBUG
-	SCRN_INFO_PTR(arg);
-#endif
-
-	TRACE_ENTER("SwitchMode");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbSwitchMode\n");
 	/* Nothing else to do. */
 	return TRUE;
 }
 
 static int
-ScfbValidMode(SCRN_ARG_TYPE arg, DisplayModePtr mode, Bool verbose, int flags)
+ScfbValidMode(ScrnInfoPtr pScrn, DisplayModePtr mode, Bool verbose,
+	      int flags)
 {
-#if DEBUG
-	SCRN_INFO_PTR(arg);
-#endif
-
-	TRACE_ENTER("ValidMode");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbValidMode\n");
 	return MODE_OK;
 }
 
@@ -994,19 +986,43 @@
 ScfbLoadPalette(ScrnInfoPtr pScrn, int numColors, int *indices,
 	       LOCO *colors, VisualPtr pVisual)
 {
-
-	TRACE_ENTER("LoadPalette");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbLoadPalette\n");
 	/* TODO */
 }
 
+static void
+ScfbDPMS(ScrnInfoPtr pScrn, int state)
+{
+	ScfbPtr fPtr = SCFBPTR(pScrn);
+
+	ioctl(fPtr->fd, FBIO_BLANK, &state);
+}
+
+static void
+ScfbDPMSSet(ScrnInfoPtr pScrn, int PowerManagementMode, int flags)
+{
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbDPMSSet(%d, %d)\n",
+		       PowerManagementMode, flags);
+
+	if (!pScrn->vtSema)
+		return;
+
+	/* The mapping of DPMSMode* to V_DISPLAY_* values is unclear. */
+	if (PowerManagementMode == DPMSModeOn)
+		ScfbDPMS(pScrn, V_DISPLAY_ON);
+	else
+		ScfbDPMS(pScrn, V_DISPLAY_SUSPEND);
+}
+
 static Bool
 ScfbSaveScreen(ScreenPtr pScreen, int mode)
 {
-	ScrnInfoPtr pScrn = xf86Screens[pScreen->myNum];
-	ScfbPtr fPtr = SCFBPTR(pScrn);
-	int state;
+	ScrnInfoPtr	pScrn = xf86ScreenToScrn(pScreen);
 
-	TRACE_ENTER("SaveScreen");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbSaveScreen(%d)\n", mode);
 
 	if (!pScrn->vtSema)
 		return TRUE;
@@ -1014,7 +1030,6 @@
 	if (mode != SCREEN_SAVER_FORCER) {
 		/* TODO, if (mode) enable_screen(); else disable_screen(); */
 	}
-	TRACE_EXIT("SaveScreen");
 	return TRUE;
 }
 
@@ -1024,10 +1039,8 @@
 {
 	ScfbPtr fPtr = SCFBPTR(pScrn);
 
-	TRACE_ENTER("ScfbSave");
-
-	TRACE_EXIT("ScfbSave");
-
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbSave\n");
 }
 
 static void
@@ -1036,14 +1049,16 @@
 	ScfbPtr fPtr = SCFBPTR(pScrn);
 	int mode;
 
-	TRACE_ENTER("ScfbRestore");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbRestore\n");
 
 	/* Clear the screen. */
 	memset(fPtr->fbmem, 0, fPtr->fbmem_len);
 
 	/* Restore the text mode. */
 	/* TODO: We need to get first, if we need mode switching */
-	TRACE_EXIT("ScfbRestore");
+	xf86DrvMsgVerb(pScrn->scrnIndex, X_INFO, SCFB_LOG_VERBOSE,
+		       "ScfbRestore done\n");
 }
 
 #ifdef XFreeXDGA
@@ -1082,9 +1097,9 @@
 		frameY0 = pScrn->frameY0;
 	}
 
-	if (!(*pScrn->SwitchMode)(SWITCH_MODE_ARGS(pScrn, pMode)))
+	if (!(*pScrn->SwitchMode)(pScrn, pMode))
 		return FALSE;
-	(*pScrn->AdjustFrame)(ADJUST_FRAME_ARGS(pScrn, frameX0, frameY0));
+	(*pScrn->AdjustFrame)(pScrn, frameX0, frameY0);
 
 	return TRUE;
 }
@@ -1092,7 +1107,7 @@
 static void
 ScfbDGASetViewport(ScrnInfoPtr pScrn, int x, int y, int flags)
 {
-	(*pScrn->AdjustFrame)(ADJUST_FRAME_ARGS(pScrn, x, y));
+	(*pScrn->AdjustFrame)(pScrn, x, y);
 }
 
 static int
