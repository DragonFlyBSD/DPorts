# $FreeBSD: textproc/hs-regex-pcre-builtin/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	regex-pcre-builtin
PORTVERSION=	0.94.4.5.8.31
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Replaces/Enhances Text.Regex

LICENSE=	BSD

USE_CABAL=	regex-base>=0.93

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
