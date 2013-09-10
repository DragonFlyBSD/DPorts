# $FreeBSD: x11-toolkits/hs-pango/Makefile 326195 2013-09-03 18:39:13Z antoine $

PORTNAME=	pango
PORTVERSION=	0.12.4
PORTREVISION=	2
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Pango text rendering engine

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	cairo>=0.12.0 glib>=0.12.0 mtl
USE_GNOME=	pango

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
