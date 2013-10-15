# $FreeBSD: devel/hs-monad-par-extras/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	monad-par-extras
PORTVERSION=	0.3.2
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Combinators and extra features for Par monads

LICENSE=	BSD

USE_CABAL=	abstract-par>=0.3 cereal>=0.3 mtl>=2.0 random>=1.0 \
		transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
