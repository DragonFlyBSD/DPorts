# Created by: Samy Al Bahra <sbahra@kerneled.org>
# $FreeBSD: ports-mgmt/hs-porte/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	porte
PORTVERSION=	0.0.4
PORTREVISION=	9
CATEGORIES=	ports-mgmt haskell

MAINTAINER=	sbahra@repnop.org
COMMENT=	FreeBSD ports index search and statistical analysis tool

LICENSE=	BSD

USE_CABAL=	extensible-exceptions stringsearch

EXECUTABLE=	porte

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
