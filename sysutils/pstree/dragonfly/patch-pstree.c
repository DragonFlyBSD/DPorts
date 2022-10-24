--- pstree.c.orig	2022-07-13 08:02:10 UTC
+++ pstree.c
@@ -217,7 +217,7 @@ static int maxLdepth=100; /* LOPTION - w
 static int compress = FALSE;
 
 #ifdef DEBUG
-static int debug = FALSE;
+static int debug = TRUE;
 #endif
 
 struct Proc {
@@ -273,20 +273,20 @@ static void uid2user(uid_t uid, char *na
 #if defined(_AIX) || defined(___AIX)	/* AIX 3.x / 4.x */
 static int GetProcessesDirect(void) {
   int i, nproc, maxnproc = 1024;
-  
+
   struct ProcInfo *proc;
   int idx;
 #ifndef USE_GETPROCS
   struct userinfo user;
 #endif
-  
+
   do {
     proc = malloc(maxnproc * sizeof(struct ProcInfo));
     if (proc == NULL) {
       fprintf(stderr, "Problems with malloc.\n");
       exit(1);
     }
-    
+
     /* Get process table */
     idx = 0;
     nproc = IFNEW(getprocs(proc, sizeof(struct procsinfo), NULL, 0,
@@ -312,15 +312,15 @@ static int GetProcessesDirect(void) {
     if (nproc == -1) {
       free(proc);
       maxnproc *= 2;
-    } 
+    }
   } while (nproc == -1);
-  
+
   P = malloc((nproc+1) * sizeof(struct Proc));
   if (P == NULL) {
     fprintf(stderr, "Problems with malloc.\n");
     exit(1);
   }
-  
+
   for (i = 0; i < nproc; i++) {
 #ifndef USE_GETPROCS
     getuser(&proc[i],sizeof(struct procinfo),
@@ -331,9 +331,9 @@ static int GetProcessesDirect(void) {
     P[i].ppid    = proc[i].pi_ppid;
     P[i].pgid    = proc[i].pi_pgrp;
     P[i].thcount = IFNEW(proc[i].pi_thcount, 1);
-    
+
     uid2user(P[i].uid, P[i].name, sizeof(P[i].name));
-    
+
     if (IFNEW(proc[i].pi_state,proc[i].pi_stat) == SZOMB) {
       strcpy(P[i].cmd, "<defunct>");
     } else {
@@ -345,16 +345,16 @@ static int GetProcessesDirect(void) {
       /* Collect args. Stop when we encounter two '\0' */
       while (c[ci] != '\0' && (ci += strlen(&c[ci])) < MAXLINE - 2)
 	c[ci++] = ' ';
-      
+
       /* Drop trailing blanks */
       ci = strlen(c);
       while (ci > 0 && c[ci-1] == ' ') ci--;
       c[ci] = '\0';
-      
+
       /* Replace some unprintables with '?' */
       for (ci = 0; c[ci] != '\0'; ci++)
 	if (c[ci] == '\n' || c[ci] == '\t') c[ci] = '?';
-      
+
       /* Insert [ui_comm] when getargs returns nothing */
       if (c[0] == '\0') {
 	int l = strlen(IFNEW(proc[i].pi_comm,user.ui_comm));
@@ -388,23 +388,23 @@ static int GetProcessesDirect(void) {
 static int GetProcessesDirect(void) {
   glob_t globbuf;
   unsigned int i, j;
-  
+
   glob("/proc/[0-9]*", GLOB_NOSORT, NULL, &globbuf);
-  
+
   P = calloc(globbuf.gl_pathc, sizeof(struct Proc));
   if (P == NULL) {
     fprintf(stderr, "Problems with malloc.\n");
     exit(1);
   }
-  
+
   for (i = j = 0; i < globbuf.gl_pathc; i++) {
     char *pdir, name[32];
     int c;
     FILE *tn;
     int k = 0;
-    
+
     pdir = globbuf.gl_pathv[globbuf.gl_pathc - i - 1];
-    
+
     /* if processes change their UID this change is only reflected in the owner of pdir.
      * fixed since version 2.36 */
     {
@@ -415,7 +415,7 @@ static int GetProcessesDirect(void) {
       P[j].uid = st.st_uid;
       uid2user(P[j].uid, P[j].name, sizeof(P[j].name));
     }
-    
+
     snprintf(name, sizeof(name), "%s%s",
 	     globbuf.gl_pathv[globbuf.gl_pathc - i - 1], "/stat");
     tn = fopen(name, "r");
@@ -424,7 +424,7 @@ static int GetProcessesDirect(void) {
 	   &P[j].pid, P[j].cmd, &P[j].ppid, &P[j].pgid);
     fclose(tn);
     P[j].thcount = 1;
-    
+
     snprintf(name, sizeof(name), "%s%s",
 	     globbuf.gl_pathv[globbuf.gl_pathc - i - 1], "/cmdline");
     tn = fopen(name, "r");
@@ -434,7 +434,7 @@ static int GetProcessesDirect(void) {
     }
     if (k > 0) P[j].cmd[k] = '\0';
     fclose(tn);
-    
+
 #ifdef DEBUG
     if (debug) fprintf(stderr,
 		       "uid=%5ld, name=%8s, pid=%5ld, ppid=%5ld, pgid=%5ld, thcount=%ld, cmd='%s'\n",
@@ -453,7 +453,7 @@ static int GetProcesses(void) {
   FILE *tn;
   int i = 0;
   char line[MAXLINE], command[] = PSCMD;
-  
+
   /* file read code contributed by Paul Kern <pkern AT utcc.utoronto.ca> */
   if (input != NULL) {
     if (strcmp(input, "-") == 0)
@@ -474,22 +474,22 @@ static int GetProcesses(void) {
 #ifdef DEBUG
   if (debug) fprintf(stderr, "popen:errno = %d\n", errno);
 #endif
-  
+
   if (NULL == fgets(line, MAXLINE, tn)) { /* Throw away header line */
     fprintf(stderr, "No input.\n");
     exit(1);
   }
-  
+
 #ifdef DEBUG
   if (debug) fputs(line, stderr);
 #endif
-  
+
   P = malloc(sizeof(struct Proc));
   if (P == NULL) {
     fprintf(stderr, "Problems with malloc.\n");
     exit(1);
   }
-  
+
   while (NULL != fgets(line, MAXLINE, tn)) {
     int len, num;
     len = strlen(line);
@@ -499,20 +499,20 @@ static int GetProcesses(void) {
       fputs(line, stderr);
     }
 #endif
-    
+
     if (len == MAXLINE - 1) { /* line too long, drop remaining stuff */
       char tmp[MAXLINE];
       while (MAXLINE - 1 == strlen(fgets(tmp, MAXLINE, tn)));
-    }      
-    
+    }
+
     P = realloc(P, (i+1) * sizeof(struct Proc));
     if (P == NULL) {
       fprintf(stderr, "Problems with realloc.\n");
       exit(1);
     }
-    
+
     memset(&P[i], 0, sizeof(*P));
-    
+
 #ifdef solaris1x
     { /* SunOS allows columns to run together.  With the -j option, the CPU
        * time used can run into the numeric user id, so make sure there is
@@ -525,16 +525,16 @@ static int GetProcesses(void) {
       snprintf(line, sizeof(line), "%s %s", buf1, buf2);
     }
 #endif
-    
+
     num = sscanf(line, PSFORMAT, PSVARS);
-    
+
     if (num != PSVARSN) {
 #ifdef DEBUG
       if (debug) fprintf(stderr, "dropped line, num=%d != %d\n", num, PSVARSN);
 #endif
       continue;
     }
-    
+
 #ifdef UID2USER	/* get username */
     uid2user(P[i].uid, P[i].name, sizeof(P[i].name));
 #endif
@@ -636,7 +636,7 @@ int get_pid_index(long pid) {
 static void MakeTree(void) {
   /* Build the process hierarchy. Every process marks itself as first child
    * of it's parent or as sister of first child of it's parent */
-  int me;  
+  int me;
   for (me = 0; me < NProc; me++) {
     int parent;
     parent = get_pid_index(P[me].ppid);
@@ -722,16 +722,16 @@ static void DropProcs(void) {
 static void PrintTree(int idx, const char *head) {
   char nhead[MAXLINE], out[4 * MAXLINE], thread[16] = {'\0'};
   int child;
-  
+
   if (head[0] == '\0' && !P[idx].print) return;
   /*if (!P[idx].print) return;*/
-  
+
   if (P[idx].thcount > 1) snprintf(thread, sizeof(thread), "[%ld]", P[idx].thcount);
- 
+
   if(atLdepth == maxLdepth) return;    /* LOPTION */
   ++atLdepth;                          /* LOPTION */
- 
-  
+
+
   snprintf(out, sizeof(out),
 	   "%s%s%s%s%s%s %05ld %s %s%s" /*" (ch=%d, si=%d, pr=%d)"*/,
 	   C->sg,
@@ -744,10 +744,10 @@ static void PrintTree(int idx, const cha
 	   thread,
 	   P[idx].cmd
 	   /*,P[idx].child,P[idx].sister,P[idx].print*/);
-  
+
   out[Columns-1] = '\0';
   puts(out);
-  
+
   /* Process children */
   snprintf(nhead, sizeof(nhead), "%s%s ", head,
 	   head[0] == '\0' ? "" : EXIST(P[idx].sister) ? C->bar : " ");
@@ -814,12 +814,12 @@ int main(int argc, char **argv) {
   int ch;
   long pid;
   int graph = G_ASCII, wide = FALSE;
-  
+
   C = &TreeChars[graph];
-  
+
   Progname = strrchr(argv[0],'/');
   Progname = (NULL == Progname) ? argv[0] : Progname + 1;
-  
+
   while ((ch = getopt(argc, argv, "cdf:g:hl:p:s:u:Uw?")) != EOF)
     switch(ch) {
       /*case 'a':
@@ -907,7 +907,7 @@ int main(int argc, char **argv) {
 #ifdef DEBUG
   if (debug) fprintf(stderr, "NProc = %d processes found.\n", NProc);
 #endif
-  
+
   RootPid = GetRootPid();
 
 #ifdef DEBUG
@@ -918,7 +918,7 @@ int main(int argc, char **argv) {
   if (debug) uid2user(0,NULL,0);
 #endif
   MyPid = getpid();
-  
+
   if (wide)
     Columns = MAXLINE - 1;
   else {
@@ -938,21 +938,21 @@ int main(int argc, char **argv) {
 #endif
   }
   if (Columns == 0) Columns = MAXLINE - 1;
-  
+
   printf("%s", C->init);
-  
+
   Columns += strlen(C->sg) + strlen(C->eg); /* Don't count hidden chars */
 
   if (Columns >= MAXLINE) Columns = MAXLINE - 1;
-  
+
 #ifdef DEBUG
   if (debug) fprintf(stderr, "Columns = %d\n", Columns);
 #endif
-  
+
   MakeTree();
   MarkProcs();
   DropProcs();
-  
+
   if (argc == optind) { /* No pids */
     PrintTree(get_pid_index(RootPid), "");
   } else while (optind < argc) {
@@ -972,7 +972,7 @@ static char * strstr(s1, s2)
      register char *s1, *s2;
 {
   register int n1, n2;
-  
+
   if (n2 = strlen(s2))
     for (n1 = strlen(s1); n1 >= n2; s1++, n1--)
       if (strncmp(s1, s2, n2) == 0)
@@ -982,16 +982,16 @@ static char * strstr(s1, s2)
 #endif /* NEED_STRSTR */
 
 #ifdef NEED_SNPRINTF
-int snprintf (char *s, int namesiz, char *format, ...) {      
+int snprintf (char *s, int namesiz, char *format, ...) {
   /* Original portable version by Michael E. White.
      This version of Stan Sieler (sieler AT allegro.com) */
 
   int  chars_needed;              /* not including trailing null */
-  
+
   char bigbuf [1024] = {'\0'};    /* note: 1024 is a guess, and may not be large enough! */
-  
+
   va_list ap;         /* some systems allow "va_list ap = NULL;", others *do not* (like MACH) */
-  
+
   va_start (ap, format);
   chars_needed = vsprintf (bigbuf, format, ap); /* note: chars_needed does not include trailing null */
   va_end (ap);
@@ -1005,23 +1005,23 @@ int snprintf (char *s, int namesiz, char
      ;     /* Don't touch 's' buffer at all! Note: on some systems, a negative namesiz
 	      will cause the process to abort. By checking for <= 0, not just 0, we differ
 	      in that area, but it's a reasonable difference. */
-   
-   else if (chars_needed >= namesiz)  
+
+   else if (chars_needed >= namesiz)
      {     /* oh oh, output too large for 'name' buffer... */
        memcpy (s, bigbuf, namesiz - 1);
        s [namesiz - 1] = '\0';
      }
-   
+
    else    /* size is ok */
      {
        memcpy (s, bigbuf, chars_needed); /* chars_needed < namesiz */
        s [chars_needed] = '\0';
        /* note: above two could be replaced by strcpy (s, bigbuf)
-	  since we know strlen (bigbuf) is acceptable.  
+	  since we know strlen (bigbuf) is acceptable.
 	  But, why copy byte at a time, comparing to null, when
 	  we *know* the length? */
      }
-   
+
    return chars_needed;    /* May be larger than namesiz, but that's ok
 			      In fact, not just 'ok', it's *useful*! */
 }
