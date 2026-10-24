--- components/autofill/core/browser/payments/bnpl_manager.cc.orig	2026-06-23 23:37:18 UTC
+++ components/autofill/core/browser/payments/bnpl_manager.cc
@@ -1062,7 +1062,7 @@ void BnplManager::MaybeUpdateDesktopSuggestionsWithBnp
       .OnBnplSuggestionShown();
 
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   payments_autofill_client().GetPaymentsDataManager().SetAutofillHasSeenBnpl();
 #endif  // BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) ||
         // BUILDFLAG(IS_CHROMEOS)
