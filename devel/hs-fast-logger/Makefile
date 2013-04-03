# $FreeBSD: devel/hs-fast-logger/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	fast-logger
PORTVERSION=	0.3.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A fast logging system

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_CABAL=	blaze-builder date-cache>=0.3 text unix-time

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
