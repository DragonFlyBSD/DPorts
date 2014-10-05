--- ssam.c.orig	1997-11-06 17:06:12 UTC
+++ ssam.c
@@ -538,7 +538,7 @@
 
 /* set a context structure */
 static void
-setcontext(context_t *dot, f_t *fp, long from, long to, int type)
+ssam_setcontext(context_t *dot, f_t *fp, long from, long to, int type)
 {
 	dot->c_fp = fp;
 	switch(type) {
@@ -746,7 +746,7 @@
 	if (i == sp->s_fsize) {
 		RunError(sp, ErrBadFilespec, &sp->s_progv[cmd], "No such file", 0);
 	}
-	setcontext(ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from, sp->s_fv[i]->f_r.r_to, BGChar);
+	ssam_setcontext(ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from, sp->s_fv[i]->f_r.r_to, BGChar);
 }
 
 /* reverse search */
@@ -796,7 +796,7 @@
 	int		base;
 
 	base = pushmatch(sp, &cmdp->c_u);
-	setcontext(&tmp, dot->c_fp, dot->c_r.r_from, dot->c_r.r_to, BGChar);
+	ssam_setcontext(&tmp, dot->c_fp, dot->c_r.r_from, dot->c_r.r_to, BGChar);
 	if (!f_seek(tmp.c_fp, off = tmp.c_r.r_from, BGFromBOF, BGChar)) {
 		RunError(sp, ErrInvalidAddr, cmdp, "(%ld)", off);
 	}
@@ -806,12 +806,12 @@
 			    &sp->s_matchv[base], 0, sp->s_collseq) == URE_NOMATCH) {
 			RunError(sp, ErrBadURE, cmdp, "Not found", 0);
 		}
-		setcontext(ndot, tmp.c_fp, boff + sp->s_matchv[base].rm_so, boff + sp->s_matchv[base].rm_eo, BGByte);
+		ssam_setcontext(ndot, tmp.c_fp, boff + sp->s_matchv[base].rm_so, boff + sp->s_matchv[base].rm_eo, BGByte);
 	} else {
 		if (!revsearch(sp, &cmdp->c_u, &tmp, cmdp->c_u.u_subc, &sp->s_matchv[base])) {
 			RunError(sp, ErrBadURE, cmdp, "Not found", 0);
 		}
-		setcontext(ndot, tmp.c_fp, sp->s_matchv[base].rm_so, sp->s_matchv[base].rm_eo, BGByte);
+		ssam_setcontext(ndot, tmp.c_fp, sp->s_matchv[base].rm_so, sp->s_matchv[base].rm_eo, BGByte);
 	}
 	popmatch(sp, &cmdp->c_u);
 }
@@ -828,17 +828,17 @@
 	sign = 0;
 	switch(sp->s_progv[cmd].c_gcp->gc_ch) {
 	case '#':
-		setcontext(ndot, dot->c_fp, sp->s_progv[cmd].c_iargv[0], sp->s_progv[cmd].c_iargv[0], BGChar);
+		ssam_setcontext(ndot, dot->c_fp, sp->s_progv[cmd].c_iargv[0], sp->s_progv[cmd].c_iargv[0], BGChar);
 		return;
 	case '$':
 		n = f_size(dot->c_fp, BGChar);
-		setcontext(ndot, dot->c_fp, n, n, BGChar);
+		ssam_setcontext(ndot, dot->c_fp, n, n, BGChar);
 		return;
 	case '.':
-		setcontext(ndot, dot->c_fp, dot->c_r.r_from, dot->c_r.r_to, BGChar);
+		ssam_setcontext(ndot, dot->c_fp, dot->c_r.r_from, dot->c_r.r_to, BGChar);
 		return;
 	case '\'':
-		setcontext(ndot, sp->s_mark.c_fp, sp->s_mark.c_r.r_from, sp->s_mark.c_r.r_to, BGChar);
+		ssam_setcontext(ndot, sp->s_mark.c_fp, sp->s_mark.c_r.r_from, sp->s_mark.c_r.r_to, BGChar);
 		return;
 	case '"':
 		findfile(sp, ndot, cmd);
@@ -848,7 +848,7 @@
 			RunError(sp, ErrBadLineNumber, &sp->s_progv[cmd], "Bad line number", 0);
 		}
 		n = f_tell(dot->c_fp, BGChar);
-		setcontext(ndot, dot->c_fp, n, (f_seek(dot->c_fp, 1, BGFromHere, BGLine)) ?
+		ssam_setcontext(ndot, dot->c_fp, n, (f_seek(dot->c_fp, 1, BGFromHere, BGLine)) ?
 						f_tell(dot->c_fp, BGChar) :
 						f_size(dot->c_fp, BGChar), BGChar);
 		return;
@@ -865,7 +865,7 @@
 		sign = -1;
 		break;
 	}
-	setcontext(ndot, lhs.c_fp, lhs.c_r.r_from, lhs.c_r.r_to, BGChar);
+	ssam_setcontext(ndot, lhs.c_fp, lhs.c_r.r_from, lhs.c_r.r_to, BGChar);
 	rhs = sp->s_progv[cmd].c_rhs;
 	switch(sp->s_progv[rhs].c_gcp->gc_ch) {
 	case '/':
@@ -876,7 +876,7 @@
 		if (!f_seek(ndot->c_fp, n, BGFromBOF, BGChar)) {
 			RunError(sp, ErrInvalidAddr, &sp->s_progv[rhs], "(%ld)", n);
 		}
-		setcontext(ndot, ndot->c_fp, n, n, BGChar);
+		ssam_setcontext(ndot, ndot->c_fp, n, n, BGChar);
 		break;
 	case '1':
 		n = (sign == 1) ? ndot->c_r.r_to : ndot->c_r.r_from;
@@ -885,10 +885,10 @@
 		}
 		n = sign * sp->s_progv[rhs].c_iargv[0];
 		if (!f_seek(ndot->c_fp, n, BGFromHere, BGLine)) {
-			setcontext(ndot, ndot->c_fp, 0, 0, BGChar);
+			ssam_setcontext(ndot, ndot->c_fp, 0, 0, BGChar);
 		} else {
 			n = f_tell(ndot->c_fp, BGChar);
-			setcontext(ndot, ndot->c_fp, n, (f_seek(ndot->c_fp, 1, BGFromHere, BGLine)) ?
+			ssam_setcontext(ndot, ndot->c_fp, n, (f_seek(ndot->c_fp, 1, BGFromHere, BGLine)) ?
 						f_tell(ndot->c_fp, BGChar) :
 						f_size(ndot->c_fp, BGChar), BGChar);
 		}
@@ -918,7 +918,7 @@
 
 	setaddress(sp, &lhs, dot, sp->s_progv[*cmdp].c_lhs);
 	setaddress(sp, &rhs, dot, sp->s_progv[*cmdp].c_rhs);
-	setcontext(&ndot, lhs.c_fp, lhs.c_r.r_from, rhs.c_r.r_to, BGChar);
+	ssam_setcontext(&ndot, lhs.c_fp, lhs.c_r.r_from, rhs.c_r.r_to, BGChar);
 	*cmdp = sp->s_progv[*cmdp].c_next;
 	return samcmd(sp, &ndot, cmdp);
 }
@@ -972,7 +972,7 @@
 		if (sp->s_fv[i] != (f_t *) NULL) {
 			maketag(buf, sizeof(buf), sp->s_fv[i], sp->s_fcurr);
 			if (ureexec(up, buf, up->u_subc, &sp->s_matchv[base], 0, sp->s_collseq) == URE_SUCCESS) {
-				setcontext(&ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from,
+				ssam_setcontext(&ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from,
 							sp->s_fv[i]->f_r.r_to, BGChar);
 				j = sp->s_progv[*cmdp].c_sub;
 				if (!samcmd(sp, &ndot, &j)) {
@@ -1003,7 +1003,7 @@
 		if (sp->s_fv[i] != (f_t *) NULL) {
 			maketag(buf, sizeof(buf), sp->s_fv[i], sp->s_fcurr);
 			if (ureexec(up, buf, up->u_subc, &sp->s_matchv[base], 0, sp->s_collseq) == URE_NOMATCH) {
-				setcontext(&ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from,
+				ssam_setcontext(&ndot, sp->s_fv[i], sp->s_fv[i]->f_r.r_from,
 							sp->s_fv[i]->f_r.r_to, BGChar);
 				j = sp->s_progv[*cmdp].c_sub;
 				if (!samcmd(sp, &ndot, &j)) {
@@ -1274,7 +1274,7 @@
 			    up->u_subc, &sp->s_matchv[base], eflag, sp->s_collseq) == URE_NOMATCH) {
 			break;
 		}
-		setcontext(&ndot, dot->c_fp, boff + sp->s_matchv[base].rm_so, boff + sp->s_matchv[base].rm_eo, BGByte);
+		ssam_setcontext(&ndot, dot->c_fp, boff + sp->s_matchv[base].rm_so, boff + sp->s_matchv[base].rm_eo, BGByte);
 		if (ndot.c_r.r_to > dot->c_r.r_to) {
 			break;
 		}
@@ -1322,7 +1322,7 @@
 			break;
 		}
 		/* got a match - now do cmd from `from' to here */
-		setcontext(&ndot, dot->c_fp, from, from + sp->s_matchv[base].rm_so, BGByte);
+		ssam_setcontext(&ndot, dot->c_fp, from, from + sp->s_matchv[base].rm_so, BGByte);
 		if (ndot.c_r.r_to > dot->c_r.r_to) {
 			break;
 		}
@@ -1341,7 +1341,7 @@
 	}
 	if (from < dot->c_r.r_to) {
 		(void) f_seek(dot->c_fp, dot->c_r.r_to, BGFromBOF, BGChar);
-		setcontext(&ndot, dot->c_fp, from, f_tell(dot->c_fp, BGByte), BGByte);
+		ssam_setcontext(&ndot, dot->c_fp, from, f_tell(dot->c_fp, BGByte), BGByte);
 		j = sp->s_progv[*cmdp].c_sub;
 		if (!samcmd(sp, &ndot, &j)) {
 			popmatch(sp, up);
@@ -1903,7 +1903,7 @@
 		print(sp, cmd, 0);
 	} else {
 		(void) f_seek(sp->s_fcurr, 0, BGFromBOF, BGChar);
-		setcontext(&sp->s_dot, sp->s_fcurr, sp->s_fcurr->f_r.r_from, sp->s_fcurr->f_r.r_to, BGChar);
+		ssam_setcontext(&sp->s_dot, sp->s_fcurr, sp->s_fcurr->f_r.r_from, sp->s_fcurr->f_r.r_to, BGChar);
 		(void) samcmd(sp, &sp->s_dot, &cmd);
 		if (!popchanges(sp)) {
 			RunError(sp, ErrChangeStack, &sp->s_progv[0], "Corrupted change stack", 0);
