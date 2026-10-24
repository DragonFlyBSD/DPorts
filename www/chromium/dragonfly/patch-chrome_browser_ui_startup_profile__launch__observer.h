--- chrome/browser/ui/startup/profile_launch_observer.h.orig	2026-09-20 16:46:11 UTC
+++ chrome/browser/ui/startup/profile_launch_observer.h
@@ -66,12 +66,16 @@
 
   // These are the profiles that get launched by
   // StartupBrowserCreator::LaunchBrowser.
-  std::set<raw_ptr<Profile, SetExperimental>> launched_profiles_;
+  // Transparent comparator: libc++ 22 synthesises ordering from the raw
+  // argument types, which std::less<raw_ptr<...>> cannot accept.
+  std::set<raw_ptr<Profile, SetExperimental>, std::less<>> launched_profiles_;
   // These are the profiles for which at least one browser window has been
   // opened. This is needed to know when it is safe to activate
   // |profile_to_activate_|, otherwise, new browser windows being opened will
   // be activated on top of it.
-  std::set<raw_ptr<Profile, SetExperimental>> opened_profiles_;
+  // Transparent comparator: libc++ 22 synthesises ordering from the raw
+  // argument types, which std::less<raw_ptr<...>> cannot accept.
+  std::set<raw_ptr<Profile, SetExperimental>, std::less<>> opened_profiles_;
   // This is null until the profile to activate has been chosen. This value
   // should only be set once all profiles have been launched, otherwise,
   // activation may not happen after the launch of newer profiles.
