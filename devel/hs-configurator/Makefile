# $FreeBSD: devel/hs-configurator/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	configurator
PORTVERSION=	0.2.0.2
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Configuration management

LICENSE=	BSD

USE_CABAL=	attoparsec>=0.10.0.2 hashable text>=0.11.1.0 unix-compat \
		unordered-containers

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
