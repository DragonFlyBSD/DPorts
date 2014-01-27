# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: sysutils/hilite/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hilite
PORTVERSION=	1.5
CATEGORIES=	sysutils
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.c

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line utility to highlight anything printed to stderr

PLIST_FILES=	bin/hilite

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
