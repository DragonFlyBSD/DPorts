# $FreeBSD: ports/devel/hs-ConfigFile/Makefile,v 1.6 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	ConfigFile
PORTVERSION=	1.1.1
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Configuration file reading and writing

LICENSE=	LGPL21
FILE_LICENSE=	COPYRIGHT

CABAL_SETUP=	Setup.hs
USE_CABAL=	MissingH>=1.0.0 mtl parsec

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
