# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: sysutils/hilite/Makefile 313649 2013-03-08 14:00:30Z ehaupt $

PORTNAME=	hilite
PORTVERSION=	1.5
CATEGORIES=	sysutils
MASTER_SITES=	SF
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.c

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Command-line utility to highlight anything printed to stderr

MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/hilite

do-extract:
	@${MKDIR} ${WRKSRC}
	@${CP} ${DISTDIR}/${DISTFILES} ${WRKSRC}

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
