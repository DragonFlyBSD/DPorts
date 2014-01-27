# Created by: Aaron Zauner <az_mail@gmx.at>
# $FreeBSD: net/aget/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	aget
PORTVERSION=	0.4.1
CATEGORIES=	net
MASTER_SITES=	http://www.enderunix.org/aget/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multithreaded HTTP download accelerator

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

MAKE_ARGS=	CC="${CC}" CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"
LDFLAGS+=	-pthread

PLIST_FILES=	bin/aget man/man1/aget.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/aget ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/aget.1 ${STAGEDIR}${MANPREFIX}/man/man1

.include <bsd.port.mk>
