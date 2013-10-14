# $FreeBSD: x11/hs-X11-xft/Makefile 327777 2013-09-20 23:43:19Z bapt $

PORTNAME=	X11-xft
PORTVERSION=	0.3.1
PORTREVISION=	7
CATEGORIES=	x11 haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the Xft, Xrender and Freetype for Haskell programs

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	utf8-string>=0.1 X11>=1.2.1
USE_XORG=	xft xrender

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
