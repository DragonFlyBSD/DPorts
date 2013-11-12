# $FreeBSD: devel/delta/Makefile 332274 2013-10-31 19:07:29Z eadler $

PORTNAME=	delta
PORTVERSION=	2006.08.03
CATEGORIES=	devel
MASTER_SITES=	LOCAL/eadler/delta

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Heuristically minimizes interesting files

LICENSE=	BSD

PLIST_FILES=	bin/delta bin/multidelta bin/topformflat

USES=		gmake

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/delta ${STAGEDIR}${PREFIX}/bin
	${INSTALL_SCRIPT} ${WRKSRC}/multidelta ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/topformflat ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
