# $FreeBSD: x11/hs-X11-xft/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	X11-xft
PORTVERSION=	0.3.1
PORTREVISION=	8
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
