--- src/ulist.c.orig	2018-04-11 06:10:50 UTC
+++ src/ulist.c
@@ -48,21 +48,17 @@ void update_line(int line)
 /*
  * Create new user structure and fill it
  */
-struct user_t *alloc_user(struct utmp *entry)
+struct user_t *alloc_user(struct utmpx *entry)
 {
 	struct user_t *u;
 	int ppid;
 
 	u = calloc(1, sizeof *u);
 	if(!u) errx(1, "Cannot allocate memory.");
-	strncpy(u->name, entry->ut_user, UT_NAMESIZE);
-	strncpy(u->tty, entry->ut_line, UT_LINESIZE);
-	strncpy(u->host, entry->ut_host, UT_HOSTSIZE);
-#ifdef HAVE_UTPID
+	strncpy(u->name, entry->ut_user, sizeof(entry->ut_user));
+	strncpy(u->tty, entry->ut_line, sizeof(entry->ut_line));
+	strncpy(u->host, entry->ut_host, sizeof(entry->ut_host));
 	u->pid = entry->ut_pid;
-#else
-	u->pid = get_login_pid(u->tty);
-#endif
 	if((ppid = get_ppid(u->pid)) == -1)
 		strncpy(u->parent, "can't access", sizeof u->parent);
 	else 	strncpy(u->parent, get_name(ppid), sizeof u->parent - 1);
@@ -70,7 +66,7 @@ struct user_t *alloc_user(struct utmp *e
 	return u;
 }
 
-static struct user_t* new_user(struct utmp *ut)
+static struct user_t* new_user(struct utmpx *ut)
 {
 	struct user_t *u;
 	u = alloc_user(ut);
@@ -108,21 +104,13 @@ void uredraw(struct wdgt *w)
  */
 void read_utmp(void)
 {
-	int fd, i;
-	static struct utmp entry;
+	static struct utmpx *entry;
 	struct user_t *u;
 
-	if ((fd = open(UTMP_FILE ,O_RDONLY)) == -1) err_exit(1, "Cannot open utmp");
-	while((i = read(fd, &entry,sizeof entry)) > 0) {
-		if(i != sizeof entry) errx(1, "Error reading " UTMP_FILE );
-#ifdef HAVE_USER_PROCESS
-		if(entry.ut_type != USER_PROCESS) continue;
-#else
-		if(!entry.ut_name[0]) continue;
-#endif
-		u = new_user(&entry);
+	while ((entry = getutxent()) != NULL) {
+		if(entry->ut_type != USER_PROCESS) continue;
+		u = new_user(entry);
 	}
-	close(fd);
 	return;
 }
 
@@ -176,31 +164,23 @@ static void check_wtmp(struct wdgt *w)
 	static int wtmp_fd;
 	struct user_t *u;
 	struct list_head *h;
-	struct utmp entry;
+	struct utmpx entry;
 	int i, changed = 0;
 	if(!wtmp_fd) open_wtmp(&wtmp_fd);
 
 	while((i = read(wtmp_fd, &entry, sizeof entry)) > 0){
 		if (i < sizeof entry) prg_exit("Error reading wtmp");
 		/* user just logged in */
-#ifdef HAVE_USER_PROCESS
 		if(entry.ut_type == USER_PROCESS) {
-#else
-		if(entry.ut_user[0]) {
-#endif
 			u = new_user(&entry);
 			changed = 1;
 			continue;
 		}
-#ifdef HAVE_DEAD_PROCESS
 		if(entry.ut_type != DEAD_PROCESS) continue;
-#else
-//		if(entry.ut_line[0]) continue;
-#endif
 	/* user just logged out */
 		list_for_each(h, &users_l) {
 			u = list_entry(h, struct user_t, head);
-			if(strncmp(u->tty, entry.ut_line, UT_LINESIZE))
+			if(strncmp(u->tty, entry.ut_line, sizeof(entry.ut_line)))
 				continue;
 			udel(u, w);
 			changed = 1;
