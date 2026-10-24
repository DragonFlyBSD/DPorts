--- src/cdefs-compat.h.orig	2026-07-09 14:39:05 UTC
+++ src/cdefs-compat.h
@@ -14,8 +14,6 @@
 #ifdef __GNUC__
 #if defined(__strong_alias) && defined(__NetBSD__)
 #define openlibm_strong_reference(sym,alias) __strong_alias(alias,sym)
-#elif defined(__strong_reference)
-#define openlibm_strong_reference(sym,alias) __strong_reference(sym,alias)
 #else
 #ifdef __APPLE__
 #define openlibm_strong_reference(sym,aliassym) openlibm_weak_reference(sym,aliassym)
