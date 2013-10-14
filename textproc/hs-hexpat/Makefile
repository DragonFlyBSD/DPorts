# $FreeBSD: textproc/hs-hexpat/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	hexpat
PORTVERSION=	0.20.3
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	XML parser/formatter based on expat

LICENSE=	BSD

USE_CABAL=	extensible-exceptions>=0.1 List>=0.4.2 text>=0.5 transformers \
		utf8-string

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
