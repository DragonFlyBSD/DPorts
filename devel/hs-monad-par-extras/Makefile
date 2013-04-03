# $FreeBSD: ports/devel/hs-monad-par-extras/Makefile,v 1.5 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	monad-par-extras
PORTVERSION=	0.3.2
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Combinators and extra features for Par monads

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	abstract-par>=0.3 cereal>=0.3 mtl>=2.0 random>=1.0 \
		transformers>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
