# $FreeBSD: net/hs-sendfile/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	sendfile
PORTVERSION=	0.7.9
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A portable sendfile library

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	network>=2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
