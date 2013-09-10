# $FreeBSD: graphics/hs-cairo/Makefile 326298 2013-09-04 17:10:07Z antoine $

PORTNAME=	cairo
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Cairo library

LICENSE=	BSD

USES=		pkgconfig
USE_CABAL=	gtk2hs-buildtools mtl

BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/cairo-pdf.pc:${PORTSDIR}/graphics/cairo

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
