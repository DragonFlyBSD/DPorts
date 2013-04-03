# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-readline/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	readline
PORTVERSION=	1.0.3.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Interface to the GNU readline library

LICENSE=	GPLv2

CABAL_SETUP=	Setup.hs

LIB_DEPENDS+=	readline:${PORTSDIR}/devel/readline

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
