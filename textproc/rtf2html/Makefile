# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: textproc/rtf2html/Makefile 313649 2013-03-08 14:00:30Z ehaupt $

PORTNAME=	rtf2html
DISTVERSION=	1.1b
CATEGORIES=	textproc
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Simple rtf2html converter

MAKE_JOBS_SAFE=	yes

PLIST_FILES=	bin/rtf2html

WRKSRC=		${WRKDIR}/${PORTNAME}

do-build:
	${CC} ${CFLAGS} ${WRKSRC}/${PORTNAME}.c -o ${WRKSRC}/${PORTNAME}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
