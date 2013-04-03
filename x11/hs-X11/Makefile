# Created by: Volker Stolz <vs@FreeBSD.org>
# $FreeBSD: x11/hs-X11/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	X11
PORTVERSION=	1.6.1.1
CATEGORIES=	x11 haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Binding to the X11 graphics library

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	data-default
USE_XORG=	x11 xrandr xext

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
