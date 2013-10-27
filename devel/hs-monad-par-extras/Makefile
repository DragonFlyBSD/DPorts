# $FreeBSD: devel/hs-monad-par-extras/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	monad-par-extras
PORTVERSION=	0.3.2
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Combinators and extra features for Par monads

LICENSE=	BSD

USE_CABAL=	abstract-par>=0.3 cereal>=0.3 mtl>=2.0 random>=1.0 \
		transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
