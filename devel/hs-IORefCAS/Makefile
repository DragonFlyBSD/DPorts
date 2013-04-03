# $FreeBSD: ports/devel/hs-IORefCAS/Makefile,v 1.5 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	IORefCAS
PORTVERSION=	0.2
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Atomic compare and swap for IORefs and STRefs

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	bits-atomic

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
