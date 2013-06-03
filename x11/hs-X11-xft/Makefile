# $FreeBSD: x11/hs-X11-xft/Makefile 317973 2013-05-12 19:30:28Z pgj $

PORTNAME=	X11-xft
PORTVERSION=	0.3.1
PORTREVISION=	6
CATEGORIES=	x11 haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Bindings to the Xft, Xrender and Freetype for Haskell programs

LICENSE=	LGPL21

USE_CABAL=	utf8-string>=0.1 X11>=1.2.1
USE_XORG=	xft xrender

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
