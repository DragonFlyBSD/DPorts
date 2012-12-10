# New ports collection makefile for:	plonx
# Date created:				25 November 2005
# Whom:					clive crous <clive@darkarts.co.za>
#
# $FreeBSD: ports/games/plonx/Makefile,v 1.3 2012/11/17 05:57:49 svnexp Exp $

PORTNAME=	plonx
PORTVERSION=	0.03
CATEGORIES=	games
MASTER_SITES=	http://bilious.homelinux.org/~paxed/${PORTNAME}/

MAINTAINER=	clive@darkarts.co.za
COMMENT=	Small ASCII puzzle game

PLIST_FILES=	bin/plonx
PORTDOCS=	README

LDFLAGS+=	-lncurses

do-build:
	${CC} ${CFLAGS} ${LDFLAGS} -o ${WRKSRC}/${PORTNAME} \
		${WRKSRC}/${PORTNAME}.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
