# $FreeBSD: devel/hs-either/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	either
PORTVERSION=	3.4
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Either monad transformer

LICENSE=	BSD

USE_CABAL=	MonadRandom mtl>=2.0 semigroupoids>=3 semigroups>=0.8.3.1 \
		transformers>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
