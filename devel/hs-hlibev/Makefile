# $FreeBSD: devel/hs-hlibev/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	hlibev
PORTVERSION=	0.4.0
PORTREVISION=	6
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	FFI interface to libev

LICENSE=	BSD

USE_CABAL=	network

LIB_DEPENDS=	ev:${PORTSDIR}/devel/libev

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
