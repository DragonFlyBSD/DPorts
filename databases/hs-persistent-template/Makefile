# $FreeBSD: databases/hs-persistent-template/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	persistent-template
PORTVERSION=	1.2.0
CATEGORIES=	databases haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Type-safe, non-relational, multi-backend persistence

LICENSE=	MIT

USE_CABAL=	aeson monad-control>=0.2 monad-logger persistent>=1.2 \
		text>=0.5 transformers>=0.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
