# $FreeBSD: net/hs-sendfile/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	sendfile
PORTVERSION=	0.7.9
PORTREVISION=	2
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Portable sendfile library

LICENSE=	BSD

USE_CABAL=	network>=2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
