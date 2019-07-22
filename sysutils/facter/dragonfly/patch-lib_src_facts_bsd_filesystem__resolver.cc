--- lib/src/facts/bsd/filesystem_resolver.cc.orig	2019-06-26 14:35:29 UTC
+++ lib/src/facts/bsd/filesystem_resolver.cc
@@ -56,7 +56,7 @@ namespace facter { namespace facts { nam
             make_tuple<unsigned int, string>(MNT_SYNCHRONOUS,  "noasync"),
             make_tuple<unsigned int, string>(MNT_NOEXEC,       "noexec"),
             make_tuple<unsigned int, string>(MNT_NOSUID,       "nosuid"),
-#ifndef __OpenBSD__
+#if !defined(__OpenBSD__) && !defined(__DragonFly__)
             make_tuple<unsigned int, string>(MNT_UNION,        "union"),
 #endif
             make_tuple<unsigned int, string>(MNT_ASYNC,        "async"),
@@ -68,7 +68,7 @@ namespace facter { namespace facts { nam
 #if !defined(__FreeBSD__)
             make_tuple<unsigned int, string>(MNT_NODEV,        "nodev"),
 #endif
-#if !defined(__FreeBSD__) && !defined(__OpenBSD__)
+#if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__DragonFly__)
             // the following constants aren't defined on FreeBSD 10/OpenBSD
             make_tuple<unsigned int, string>(MNT_DONTBROWSE,   "nobrowse"),
             make_tuple<unsigned int, string>(MNT_AUTOMOUNTED,  "automounted"),
