# $FreeBSD: textproc/hs-regex-pcre-builtin/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	regex-pcre-builtin
PORTVERSION=	0.94.4.5.8.31
PORTREVISION=	2
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Replaces/Enhances Text.Regex

LICENSE=	BSD

USE_CABAL=	regex-base>=0.93

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
