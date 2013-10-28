# $FreeBSD: devel/hs-test-framework-hunit/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	test-framework-hunit
PORTVERSION=	0.3.0
PORTREVISION=	4
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	HUnit support for the test-framework package

LICENSE=	BSD

USE_CABAL=	HUnit>=1.2 test-framework>=0.2.0

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
