# $FreeBSD: x11/hs-X11-xft/Makefile 326422 2013-09-05 17:37:22Z antoine $

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

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
