# New ports collection makefile for:  jargon
# Date created: 	11 July 1998
# Whom:			moeding
#
# $FreeBSD: ports/misc/jargon/Makefile,v 1.24 2012/11/17 05:59:38 svnexp Exp $
#

PORTNAME=	jargon
PORTVERSION=	4.4.7
CATEGORIES=	misc
MASTER_SITES=	http://www.catb.org/~esr/jargon/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	The famous jargon file

NO_BUILD=	yes

DATADIR=	${PREFIX}/share/jargon

post-extract:
	(cd ${WRKSRC}; \
	 ${RM} -rf html/graphics/.xvpics graphics/.xvpics \
		html/letters.html~ html/online-preface.html~)

do-install:
	${MKDIR} ${DATADIR}
	(cd ${WRKSRC}; ${PAX} -rw . ${DATADIR})
	${CHOWN} -R ${SHAREOWN}:${SHAREGRP} ${DATADIR}

.include <bsd.port.mk>
