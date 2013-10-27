# $FreeBSD: net/hs-simple-sendfile/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	simple-sendfile
PORTVERSION=	0.2.11
PORTREVISION=	2
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for the sendfile() system call

LICENSE=	BSD

USE_CABAL=	network

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
