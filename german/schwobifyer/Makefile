# Created by: Emanuel Haupt <ehaupt@critical.ch>
# $FreeBSD: german/schwobifyer/Makefile 331494 2013-10-24 15:11:40Z ehaupt $

PORTNAME=	schwobifyer
PORTVERSION=	20050730
CATEGORIES=	german
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Utility for translating German into the Schwaebisch dialect

MAKE_JOBS_UNSAFE=	yes

PLIST_FILES=	bin/schwobifyer

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
