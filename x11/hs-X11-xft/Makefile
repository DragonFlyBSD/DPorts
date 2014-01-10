# $FreeBSD: x11/hs-X11-xft/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	X11-xft
PORTVERSION=	0.3.1
PORTREVISION=	9
CATEGORIES=	x11 haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the Xft, Xrender and Freetype for Haskell programs

LICENSE=	LGPL21

USES=		pkgconfig
USE_CABAL=	utf8-string>=0.1 X11>=1.2.1
USE_XORG=	xft xrender

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
