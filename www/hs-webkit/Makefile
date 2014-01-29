# $FreeBSD: www/hs-webkit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	webkit
PORTVERSION=	0.12.4
PORTREVISION=	6
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Webkit library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	cairo>=0.12 glib>=0.12 gtk>=0.12 mtl pango>=0.12
BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/webkit-1.0.pc:${PORTSDIR}/www/webkit-gtk2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
