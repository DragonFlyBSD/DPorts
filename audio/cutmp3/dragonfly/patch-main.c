--- main.c.orig	2025-06-30 17:23:14 UTC
+++ main.c
@@ -2437,21 +2437,21 @@ void  term_restore  (void)  {
 }  /* term_restore */
 
 /* Clean up terminal; called on exit */
-void  term_exit  (int)  {
+void  term_exit  (int sig)  {
 	term_restore();
 	printf("\n\nbugreports to mail@puchalla-online.de\n\n");
 	exitseq(0);
 }	/* term_exit */
 
 /* Will be called when ctrl-z is pressed, this correctly handles the terminal */
-void  term_ctrlz  (int)  {
+void  term_ctrlz  (int sig)  {
 	signal(SIGTSTP, term_ctrlz);
 	term_restore();
 	kill(getpid(), SIGSTOP);
 }  /* term_ctrlz */
 
 /* Will be called when application is continued after having been stopped */
-void  term_cont  (int)  {
+void  term_cont  (int sig)  {
 	signal(SIGCONT, term_cont);
 	tcsetattr(0, TCSANOW, &current);
 }  /* term_cont */
