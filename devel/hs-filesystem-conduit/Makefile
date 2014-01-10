# $FreeBSD: devel/hs-filesystem-conduit/Makefile 339286 2014-01-09 21:32:12Z pgj $

PORTNAME=	filesystem-conduit
PORTVERSION=	1.0.0
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Use system-filepath data types with conduits

LICENSE=	BSD

USE_CABAL=	conduit>=1.0 system-fileio>=0.3.3 system-filepath>=0.4.3 \
		text>=0.11 transformers>=0.2.2

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
