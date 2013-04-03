# $FreeBSD: ports/devel/hs-resource-pool/Makefile,v 1.5 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	resource-pool
PORTVERSION=	0.2.1.1
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A high-performance striped resource pooling implementation

LICENSE=	BSD

USE_CABAL=	hashable monad-control>=0.2.0.1 stm transformers \
		transformers-base>=0.4 vector>=0.7

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
