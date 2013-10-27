# Created by: Matthieu Guegan <matt.guegan@free.fr>
# $FreeBSD: x11-wm/hs-xmonad/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	xmonad
PORTVERSION=	0.11
PORTREVISION=	4
CATEGORIES=	x11-wm haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Tiling window manager

LICENSE=	BSD

USE_CABAL=	extensible-exceptions mtl utf8-string>=0.3 X11>=1.5
USE_XORG=	x11

MAN1=		xmonad.1
MAN1SRC=	man

EXECUTABLE=	xmonad

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
