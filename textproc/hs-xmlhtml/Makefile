# $FreeBSD: textproc/hs-xmlhtml/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	xmlhtml
PORTVERSION=	0.2.1
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	XML parser and renderer with HTML 5 quirks mode

LICENSE=	BSD

USE_CABAL=	blaze-builder>=0.2 blaze-html>=0.5 blaze-markup>=0.5 \
		parsec>=3.1.2 text>=0.11 unordered-containers>=0.1.4

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
