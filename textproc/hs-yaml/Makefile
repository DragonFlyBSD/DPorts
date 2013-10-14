# $FreeBSD: textproc/hs-yaml/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	yaml
PORTVERSION=	0.8.2.4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Support for parsing and rendering YAML documents

LICENSE=	BSD

USE_CABAL=	aeson>=0.5 attoparsec conduit>=0.5 resourcet>=0.3 text \
		transformers>=0.1 unordered-containers vector

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
