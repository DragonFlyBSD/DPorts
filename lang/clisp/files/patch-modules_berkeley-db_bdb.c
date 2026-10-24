--- modules/berkeley-db/bdb.c.orig	2026-07-09 12:56:21 UTC
+++ modules/berkeley-db/bdb.c
@@ -264,7 +264,7 @@ static void add_message (struct messages* *data_, cons
 /* dbe is a const pointer, so we cannot change its slots explicitly
    (e.g., by assigning to app_private),
    so we have to pass an address to add_message() */
-static void message_callback (const DB_ENV* dbe, const char *msg) {
+static void message_callback (const DB_ENV* dbe, const char *msg, const char * nothing) {
   add_message((struct messages**)&(dbe->app_private),msg);
 }
 #else
