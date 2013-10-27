# $FreeBSD: databases/hs-persistent-template/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	persistent-template
PORTVERSION=	1.2.0
PORTREVISION=	1
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson monad-control>=0.2 monad-logger persistent>=1.2 \
		text>=0.5 transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
