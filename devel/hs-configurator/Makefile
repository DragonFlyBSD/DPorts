# $FreeBSD: devel/hs-configurator/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	configurator
PORTVERSION=	0.2.0.2
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Configuration management

LICENSE=	BSD

USE_CABAL=	attoparsec>=0.10.0.2 hashable text>=0.11.1.0 unix-compat \
		unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
