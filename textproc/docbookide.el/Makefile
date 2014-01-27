# Created by: Sean Chittenden <seanc@FreeBSD.org>
# $FreeBSD: textproc/docbookide.el/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	docbookide.el
PORTVERSION=	0.1
CATEGORIES=	textproc elisp
MASTER_SITES=	http://nwalsh.com/emacs/docbookide/
DISTNAME=	docbookide01

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Emacs lisp modules for editing DocBook documents

USE_ZIP=	yes
WRKSRC=		${WRKDIR}/docbookide
NO_BUILD=	yes

ELISP_FILES=	dbide-abbrev.el dbide-data.el dbide-font.el \
		dbide-process.el docbookide.el make-regexp.el

EMACS_LISPDIR=	${PREFIX}/share/emacs/site-lisp/docbookide
XEMACSLISPDIR=	${PREFIX}/lib/xemacs/site-lisp/docbookide

NO_STAGE=	yes
do-install:
	${MKDIR} ${EMACS_LISPDIR}
	${MKDIR} ${XEMACSLISPDIR}
.for f in ${ELISP_FILES}
	${INSTALL_DATA} ${WRKSRC}/${f} ${EMACS_LISPDIR}/
	${LN} -sf ${EMACS_LISPDIR}/${f} ${XEMACSLISPDIR}/
.endfor
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
