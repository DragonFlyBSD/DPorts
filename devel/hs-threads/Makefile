# $FreeBSD: devel/hs-threads/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	threads
PORTVERSION=	0.5.0.2
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Fork threads and wait for their result

LICENSE=	BSD

USE_CABAL=	base-unicode-symbols>=0.1.1 stm>=2.1

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
