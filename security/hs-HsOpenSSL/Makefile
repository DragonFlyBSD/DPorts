# $FreeBSD: ports/security/hs-HsOpenSSL/Makefile,v 1.6 2013/02/05 22:47:13 svnexp Exp $

PORTNAME=	HsOpenSSL
PORTVERSION=	0.10.3.3
PORTREVISION=	1
CATEGORIES=	security haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	(Incomplete) OpenSSL binding for Haskell

FILE_LICENSE=	COPYING

CABAL_SETUP=	Setup.hs

USE_CABAL=	network>=2.1.0.0

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
