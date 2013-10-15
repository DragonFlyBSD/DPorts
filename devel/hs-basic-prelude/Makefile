# $FreeBSD: devel/hs-basic-prelude/Makefile 327723 2013-09-20 17:04:43Z bapt $

PORTNAME=	basic-prelude
PORTVERSION=	0.3.5.0
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Enhanced core prelude; a common foundation for alternate preludes

LICENSE=	MIT

USE_CABAL=	hashable lifted-base ReadArgs>=1.2 system-filepath>=0.4 text \
		transformers unordered-containers vector

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
