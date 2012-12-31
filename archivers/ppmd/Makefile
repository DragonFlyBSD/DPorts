# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: ports/archivers/ppmd/Makefile,v 1.7 2012/12/18 08:04:12 svnexp Exp $

PORTNAME=	ppmd
PORTVERSION=	20050811
CATEGORIES=	archivers
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Fast archiver with good compression ratio

MAKE_JOBS_SAFE=	yes

MAN1=		ppmd.1
PORTDOCS=	read_me.txt
PLIST_FILES=	bin/ppmd

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.1 ${MANPREFIX}/man/man1

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/${PORTDOCS} ${DOCSDIR}
.endif

.include <bsd.port.mk>
