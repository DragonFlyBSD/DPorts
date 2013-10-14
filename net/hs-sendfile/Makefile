# $FreeBSD: net/hs-sendfile/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	sendfile
PORTVERSION=	0.7.9
PORTREVISION=	1
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Portable sendfile library

LICENSE=	BSD

USE_CABAL=	network>=2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
