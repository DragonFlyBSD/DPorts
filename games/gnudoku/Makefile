# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/gnudoku/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	GNUDoku
PORTVERSION=	0.93
PORTREVISION=	6
CATEGORIES=	games
MASTER_SITES=	http://offload2.icculus.org:9090/~jcspray/GNUDoku/ \
		http://mirror.amdmi3.ru/distfiles/

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	A free program for creating and solving Su Doku puzzles

LIB_DEPENDS=	libgtkmm-2.4.so:${PORTSDIR}/x11-toolkits/gtkmm24

USES=		gmake pkgconfig
MAKE_ENV=	CXXLAGS="${CXXFLAGS}"
MAKE_ARGS=	PREFIX="${STAGEDIR}${PREFIX}"

post-patch:
	@${REINPLACE_CMD} -e 's|CXXFLAGS=|CXXFLAGS+=|' ${WRKSRC}/Makefile

.include <bsd.port.mk>
