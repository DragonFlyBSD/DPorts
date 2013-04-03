# $FreeBSD: net/hs-simple-sendfile/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	simple-sendfile
PORTVERSION=	0.2.11
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for the sendfile() system call

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	network
USE_CABAL+=	conduit>=0.4.1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
