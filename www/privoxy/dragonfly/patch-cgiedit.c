--- cgiedit.c.orig	2023-02-05 04:00:26 UTC
+++ cgiedit.c
@@ -253,6 +253,12 @@ static const struct action_type_info act
       "P", "CLIENT-BODY-FILTER"
    },
    {
+      ACTION_MULTI_CLIENT_BODY_TAGGER,
+      "client-body-tagger-params", "client-body-tagger",
+      "client-body-tagger-all", "client_body_tagger_all",
+      "Q", "CLIENT-BODY-TAGGER"
+   },
+   {
       ACTION_MULTI_ADD_HEADER,
       "add-header-params", "add-header",
       "add-header-all", "add_header_all",
