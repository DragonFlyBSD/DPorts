# $FreeBSD: x11-toolkits/hs-vte/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	vte
PORTVERSION=	0.12.1
PORTREVISION=	6
CATEGORIES=	x11-toolkits haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the VTE library

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	glib>=0.12 gtk>=0.12 mtl pango>=0.12
USE_GNOME=	vte

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
