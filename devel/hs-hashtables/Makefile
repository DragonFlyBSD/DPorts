# $FreeBSD: devel/hs-hashtables/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	hashtables
PORTVERSION=	1.1.0.2
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Mutable hash tables in the ST monad

LICENSE=	BSD

USE_CABAL=	hashable>=1.1 primitive vector>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
