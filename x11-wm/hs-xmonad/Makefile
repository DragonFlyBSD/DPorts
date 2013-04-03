# Created by: Matthieu Guegan <matt.guegan@free.fr>
# $FreeBSD: x11-wm/hs-xmonad/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	xmonad
PORTVERSION=	0.11
PORTREVISION=	1
CATEGORIES=	x11-wm haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Tiling window manager

LICENSE=	BSD

USE_CABAL=	mtl utf8-string>=0.3 X11>=1.5
USE_XORG=	x11

MAN1=		xmonad.1
MAN1SRC=	man

EXECUTABLE=	xmonad

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
