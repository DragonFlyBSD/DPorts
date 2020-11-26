--- src/bin/e_desklock.c.orig	2020-07-26 16:39:12 UTC
+++ src/bin/e_desklock.c
@@ -248,7 +248,7 @@ _desklock_show_internal(Eina_Bool suspen
    E_Desklock_Hide_Cb hide_cb;
    E_Zone *zone;
 
-#if !defined(HAVE_PAM) && !defined(__FreeBSD__)  && !defined(__OpenBSD__)
+#if !defined(HAVE_PAM) && !defined(__FreeBSD__)  && !defined(__OpenBSD__) && !defined(__DragonFly__)
    if (!e_desklock_is_personal())
      {
         e_util_dialog_show(_("Error - no PAM support"),
