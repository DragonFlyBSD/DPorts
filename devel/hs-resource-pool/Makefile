# $FreeBSD: devel/hs-resource-pool/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	resource-pool
PORTVERSION=	0.2.1.1
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	High-performance striped resource pooling implementation

LICENSE=	BSD

USE_CABAL=	hashable monad-control>=0.2.0.1 stm transformers \
		transformers-base>=0.4 vector>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
