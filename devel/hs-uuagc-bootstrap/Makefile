# $FreeBSD: devel/hs-uuagc-bootstrap/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	uuagc-bootstrap
PORTVERSION=	0.9.40.2
PORTREVISION=	7
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Attribute Grammar System of Universiteit Utrecht

LICENSE=	BSD

USE_CABAL=	haskell-src-exts>=1.11.1 mtl>=1.1.1.1 uulib>=0.9.14

EXECUTABLE=	uuagc-bootstrap

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
