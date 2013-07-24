# $FreeBSD: ftp/hs-curl/Makefile 322783 2013-07-11 16:26:26Z sunpoet $

PORTNAME=	curl
PORTVERSION=	1.3.8
PORTREVISION=	3
CATEGORIES=	ftp haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell binding to libcurl

LICENSE=	BSD

LIB_DEPENDS=	curl:${PORTSDIR}/ftp/curl

USE_GHC_NATIVE=	yes

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
