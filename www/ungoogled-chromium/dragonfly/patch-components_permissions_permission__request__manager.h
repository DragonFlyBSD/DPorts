--- components/permissions/permission_request_manager.h.orig	2026-09-20 13:39:16 UTC
+++ components/permissions/permission_request_manager.h
@@ -565,7 +565,11 @@
   // Maps each PermissionRequest currently in |requests_| or
   // |pending_permission_requests_| to which RenderFrameHost it originated from.
   // Note that no date is stored for |duplicate_requests_|.
-  std::map<base::raw_ref<PermissionRequest>, PermissionRequestSource>
+  // Transparent comparator: libc++ 22 synthesises ordering from the raw
+  // argument types, and raw_ref has an explicit ctor, so bare find(request)
+  // cannot convert. raw_ref provides heterogeneous operator<=>/operator<,
+  // which std::less<> uses directly.
+  std::map<base::raw_ref<PermissionRequest>, PermissionRequestSource, std::less<>>
       request_sources_map_;
 
   // Sequence of requests from pending queue will be marked as validated, when
