# $FreeBSD: www/hs-wai-logger/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	wai-logger
PORTVERSION=	0.3.0
PORTREVISION=	3
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Logging system for WAI

LICENSE=	BSD

USE_CABAL=	blaze-builder byteorder case-insensitive date-cache>=0.3 \
		fast-logger>=0.3 http-types network wai

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
