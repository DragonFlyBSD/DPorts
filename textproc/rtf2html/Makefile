# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: textproc/rtf2html/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rtf2html
DISTVERSION=	1.1b
CATEGORIES=	textproc
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Simple rtf2html converter

PLIST_FILES=	bin/rtf2html

WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
