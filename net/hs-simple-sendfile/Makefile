# $FreeBSD: net/hs-simple-sendfile/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	simple-sendfile
PORTVERSION=	0.2.11
PORTREVISION=	1
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Cross-platform library for the sendfile() system call

LICENSE=	BSD

USE_CABAL=	network

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
