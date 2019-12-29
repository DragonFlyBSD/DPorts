--- svc.c.orig	2019-12-29 10:58:46.000000000 +0000
+++ svc.c
@@ -27,7 +27,7 @@
 
 #include    "pound.h"
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 # define TABNODE_GET_DOWN_LOAD(t) lh_TABNODE_get_down_load(t)
 # define TABNODE_SET_DOWN_LOAD(t,n) lh_TABNODE_set_down_load(t,n)
 #else
@@ -65,7 +65,7 @@ t_add(LHASH_OF(TABNODE) *const tab, cons
     }
     memcpy(t->content, content, cont_len);
     t->last_acc = time(NULL);
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     if((old = lh_TABNODE_insert(tab, t)) != NULL) {
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     if((old = LHM_lh_insert(TABNODE, tab, t)) != NULL) {
@@ -91,7 +91,7 @@ t_find(LHASH_OF(TABNODE) *const tab, cha
     TABNODE t, *res;
 
     t.key = key;
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     if((res = lh_TABNODE_retrieve(tab, &t)) != NULL) {
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     if((res = (TABNODE *)LHM_lh_retrieve(TABNODE, tab, &t)) != NULL) {
@@ -113,7 +113,7 @@ t_remove(LHASH_OF(TABNODE) *const tab, c
     TABNODE t, *res;
 
     t.key = key;
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     if((res = lh_TABNODE_delete(tab, &t)) != NULL) {    
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     if((res = LHM_lh_delete(TABNODE, tab, &t)) != NULL) {
@@ -140,7 +140,7 @@ t_old_doall_arg(TABNODE *t, ALL_ARG *a)
     TABNODE *res;
 
     if(t->last_acc < a->lim)
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
         if((res = lh_TABNODE_delete(a->tab, t)) != NULL) {	    
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
         if((res = LHM_lh_delete(TABNODE, a->tab, t)) != NULL) {
@@ -160,7 +160,7 @@ IMPLEMENT_LHASH_DOALL_ARG_FN(t_old, TABN
 IMPLEMENT_LHASH_DOALL_ARG_FN(t_old, TABNODE *, ALL_ARG *)
 #endif
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 IMPLEMENT_LHASH_DOALL_ARG(TABNODE,ALL_ARG);
 #endif
 
@@ -177,7 +177,7 @@ t_expire(LHASH_OF(TABNODE) *const tab, c
     a.lim = lim;
     down_load = TABNODE_GET_DOWN_LOAD(tab);
     TABNODE_SET_DOWN_LOAD(tab, 0);
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     lh_TABNODE_doall_ALL_ARG(tab, t_old_doall_arg, &a);
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     LHM_lh_doall_arg(TABNODE, tab, LHASH_DOALL_ARG_FN(t_old), ALL_ARG, &a);
@@ -194,7 +194,7 @@ t_cont_doall_arg(TABNODE *t, ALL_ARG *ar
     TABNODE *res;
 
     if(memcmp(t->content, arg->content, arg->cont_len) == 0)
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
         if((res = lh_TABNODE_delete(arg->tab, t)) != NULL) {
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
         if((res = LHM_lh_delete(TABNODE, arg->tab, t)) != NULL) {
@@ -228,7 +228,7 @@ t_clean(LHASH_OF(TABNODE) *const tab, vo
     a.cont_len = cont_len;
     down_load = TABNODE_GET_DOWN_LOAD(tab);
     TABNODE_SET_DOWN_LOAD(tab, 0);
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     lh_TABNODE_doall_ALL_ARG(tab, t_cont_doall_arg, &a);
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     LHM_lh_doall_arg(TABNODE, tab, LHASH_DOALL_ARG_FN(t_cont), ALL_ARG, &a);
@@ -1505,7 +1505,7 @@ IMPLEMENT_LHASH_DOALL_ARG_FN(t_dump, TAB
 IMPLEMENT_LHASH_DOALL_ARG_FN(t_dump, TABNODE *, DUMP_ARG *)
 #endif
 
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
 IMPLEMENT_LHASH_DOALL_ARG(TABNODE,DUMP_ARG);
 #endif
 	
@@ -1519,7 +1519,7 @@ dump_sess(const int control_sock, LHASH_
 
     a.control_sock = control_sock;
     a.backends = backends;
-#if OPENSSL_VERSION_NUMBER >= 0x10100000L
+#if OPENSSL_VERSION_NUMBER >= 0x10100000L && !defined(LIBRESSL_VERSION_NUMBER)
     lh_TABNODE_doall_DUMP_ARG(sess, t_dump_doall_arg, &a);
 #elif OPENSSL_VERSION_NUMBER >= 0x10000000L
     LHM_lh_doall_arg(TABNODE, sess, LHASH_DOALL_ARG_FN(t_dump), DUMP_ARG, &a);
