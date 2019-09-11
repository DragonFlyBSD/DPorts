DragonFly pids go to 1 million, so allocate an extra character

--- src/plist.c.orig	2018-04-11 06:10:50 UTC
+++ src/plist.c
@@ -152,12 +152,12 @@ static char *prepare_line(struct wdgt *w
 		offset = snprintf(w->mwin->gbuf, w->mwin->gbsize, "\x6%4d ", p->line + 1);
 	if (offset < 0) return "";
 	if(show_owner)
-		snprintf(w->mwin->gbuf+offset, w->mwin->gbsize-offset ,"\x3%5d %c%c \x3%-8s \x2%s \x3%s",
+		snprintf(w->mwin->gbuf+offset, w->mwin->gbsize-offset ,"\x3%6d %c%c \x3%-8s \x2%s \x3%s",
 			p->proc->pid, get_state_color(state),
 			state, get_owner_name(proc_pid_uid(p->proc->pid)), tree,
 			get_cmdline(p->proc->pid));
 	else
-		snprintf(w->mwin->gbuf+offset, w->mwin->gbsize-offset,"\x3%5d %c%c \x2%s \x3%s",
+		snprintf(w->mwin->gbuf+offset, w->mwin->gbsize-offset,"\x3%6d %c%c \x2%s \x3%s",
 			p->proc->pid, get_state_color(state),
 			state, tree, get_cmdline(p->proc->pid));
 
