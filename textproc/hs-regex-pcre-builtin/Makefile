# $FreeBSD: textproc/hs-regex-pcre-builtin/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	regex-pcre-builtin
PORTVERSION=	0.94.4.5.8.31
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Replaces/Enhances Text.Regex

LICENSE=	BSD

USE_CABAL=	regex-base>=0.93

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
