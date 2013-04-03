# $FreeBSD: ports/devel/hs-hashed-storage/Makefile,v 1.13 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	hashed-storage
PORTVERSION=	0.5.10
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Hashed file storage support code

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_CABAL=	dataenc mmap>=0.5 mtl zlib

CONFIGURE_ARGS+=	--flags="-test"

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
