--- components/password_manager/core/browser/password_form_filling.cc.orig	2026-06-23 23:37:18 UTC
+++ components/password_manager/core/browser/password_form_filling.cc
@@ -177,7 +177,7 @@ LikelyFormFilling SendFillInformationToRenderer(
 #endif
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
     if (!should_show_popup_without_passwords) {
       client->MaybeShowSavePasswordPrimingPromo(observed_form.url);
     }
