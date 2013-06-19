# $FreeBSD: devel/hs-monad-logger/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	monad-logger
PORTVERSION=	0.3.1.1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Class of monads which can log messages

LICENSE=	MIT

USE_CABAL=	conduit>=1.0 fast-logger>=0.2 monad-control mtl \
		resourcet>=0.4 text transformers transformers-base

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
