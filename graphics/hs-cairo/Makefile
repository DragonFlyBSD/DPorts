# $FreeBSD: graphics/hs-cairo/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	cairo
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	graphics haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Cairo library

LICENSE=	BSD

USE_CABAL=	gtk2hs-buildtools mtl

BUILD_DEPENDS+=	${LOCALBASE}/libdata/pkgconfig/cairo-pdf.pc:${PORTSDIR}/graphics/cairo

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
