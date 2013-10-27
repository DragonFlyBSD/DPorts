# $FreeBSD: x11-toolkits/hs-pango/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	pango
PORTVERSION=	0.12.4
PORTREVISION=	3
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the Pango text rendering engine

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	cairo>=0.12.0 glib>=0.12.0 mtl
USE_GNOME=	pango

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
