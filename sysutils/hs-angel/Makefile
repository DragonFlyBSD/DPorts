# $FreeBSD: sysutils/hs-angel/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	angel
PORTVERSION=	0.3.4
PORTREVISION=	2
CATEGORIES=	sysutils haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Process management and supervision daemon

LICENSE=	BSD

USE_CABAL=	configurator>=0.1 MissingH mtl stm>=2.0 text>=0.11 \
		unordered-containers>=0.1.4

EXECUTABLE=	angel

STANDALONE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
