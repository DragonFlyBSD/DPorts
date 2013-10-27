# $FreeBSD: net/hs-socks/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	socks
PORTVERSION=	0.5.1
PORTREVISION=	1
CATEGORIES=	net haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Socks proxy (version 5) implementation

LICENSE=	BSD

USE_CABAL=	cereal>=0.3.1 network>=2.3

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
