--- sublist.c.orig	2026-11-06 02:57:57 UTC
+++ sublist.c
@@ -20,7 +20,7 @@
 #define CHUNK		100			/* sublist allocation unit */
 
 #ifndef NOREGEX
-#if defined(linux) || defined(__FreeBSD__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 #include <regex.h>
 #else
 #define regex_t char
@@ -30,10 +30,10 @@
 #define regex re_exec
 extern char		*regcmp(), *regex(), *__loc1;
 #endif
-#if defined(__EMX__) || defined(__FreeBSD__)
+#if defined(__EMX__) || defined(__FreeBSD__) || defined(__DragonFly__)
 #define regcmp(a, b) regcomp(a, b, REG_BASIC)
 #define regex regexec
-#ifndef __FreeBSD__
+#if !defined(__FreeBSD__) && !defined(__DragonFly__)
 extern char		*regcmp(), *regex(), *__loc1;
 #endif
 #endif
@@ -95,7 +95,7 @@ void create_sublist(
 #ifndef NOREGEX
 		regex_t *preg = 0;
 		if (search_mode == 2) {
-#if defined(linux) || defined(__FreeBSD__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 			preg = (regex_t *)malloc(sizeof(regex_t));
 			if (regcomp(preg, key, 0)) {
 #else
@@ -116,7 +116,7 @@ void create_sublist(
 			    append_entry(&w->sublist, ep);
 #ifndef NOREGEX
 		if (search_mode == 2) {
-#if defined(linux) || defined(__FreeBSD__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 			regfree(preg);
 			free(preg);
 #else
@@ -217,7 +217,7 @@ static BOOL keymatch(
 
 #ifndef NOREGEX
 	  case 2: {
-#if defined(linux) || defined(__FreeBSD__)
+#if defined(linux) || defined(__FreeBSD__) || defined(__DragonFly__)
 		return(regexec(preg, string, 0, 0, 0) == 0);
 #else
 		char dummy[1024];
