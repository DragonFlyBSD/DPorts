# $FreeBSD: textproc/hs-yaml/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	yaml
PORTVERSION=	0.8.2.4
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for parsing and rendering YAML documents

LICENSE=	BSD

USE_CABAL=	aeson>=0.5 attoparsec conduit>=0.5 resourcet>=0.3 text \
		transformers>=0.1 unordered-containers vector

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
