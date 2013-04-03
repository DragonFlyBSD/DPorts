# $FreeBSD: devel/hs-threads/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	threads
PORTVERSION=	0.5.0.2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Fork threads and wait for their result

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	base-unicode-symbols>=0.1.1 stm>=2.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
