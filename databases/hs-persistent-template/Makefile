# $FreeBSD: databases/hs-persistent-template/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	persistent-template
PORTVERSION=	1.2.0
PORTREVISION=	2
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson monad-control>=0.2 monad-logger persistent>=1.2 \
		text>=0.5 transformers>=0.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
