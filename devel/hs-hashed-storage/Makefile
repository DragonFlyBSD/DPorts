# $FreeBSD: devel/hs-hashed-storage/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	hashed-storage
PORTVERSION=	0.5.10
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Hashed file storage support code

LICENSE=	BSD

USE_CABAL=	dataenc extensible-exceptions mmap>=0.5 mtl zlib

CONFIGURE_ARGS+=	--flags="-test"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
