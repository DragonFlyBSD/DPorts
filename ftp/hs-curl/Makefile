# $FreeBSD: ftp/hs-curl/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	4
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_GHC_NATIVE=	yes

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
