# $FreeBSD: devel/hs-uuagc-bootstrap/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	uuagc-bootstrap
PORTVERSION=	0.9.40.2
PORTREVISION=	5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Attribute Grammar System of Universiteit Utrecht

LICENSE=	BSD

CABAL_SETUP=	Setup.hs
USE_CABAL=	haskell-src-exts>=1.11.1 mtl>=1.1.1.1 uulib>=0.9.14

EXECUTABLE=	uuagc-bootstrap

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
