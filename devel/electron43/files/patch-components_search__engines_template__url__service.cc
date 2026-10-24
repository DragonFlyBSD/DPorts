--- components/search_engines/template_url_service.cc.orig	2026-06-23 23:37:18 UTC
+++ components/search_engines/template_url_service.cc
@@ -3716,7 +3716,7 @@ TemplateURLService::GetEnterpriseSearchManager(PrefSer
 std::unique_ptr<EnterpriseSearchManager>
 TemplateURLService::GetEnterpriseSearchManager(PrefService* prefs) {
 #if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || \
-    BUILDFLAG(IS_CHROMEOS)
+    BUILDFLAG(IS_CHROMEOS) || BUILDFLAG(IS_BSD)
   return std::make_unique<EnterpriseSearchManager>(
       prefs, base::BindRepeating(&TemplateURLService::EnterpriseSearchChanged,
                                  base::Unretained(this)));
