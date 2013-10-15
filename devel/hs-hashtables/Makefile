# $FreeBSD: devel/hs-hashtables/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	hashtables
PORTVERSION=	1.1.0.2
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Mutable hash tables in the ST monad

LICENSE=	BSD

USE_CABAL=	hashable>=1.1 primitive vector>=0.7

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
