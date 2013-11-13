# Created by: Johann Visagie <wjv@FreeBSD.org>
# $FreeBSD: misc/since/Makefile 331602 2013-10-25 15:52:40Z tabthorpe $

PORTNAME=	since
PORTVERSION=	1.1
CATEGORIES=	misc
MASTER_SITES=	http://welz.org.za/projects/since/

MAINTAINER=	tabthorpe@FreeBSD.org
COMMENT=	View the end of a file like tail(1), but save state between sessions

LICENSE=	GPLv3

USES=		gmake

ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/since man/man1/since.1.gz

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/since ${STAGEDIR}${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/since.1 ${STAGEDIR}${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
