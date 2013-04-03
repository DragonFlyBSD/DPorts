# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-uuagc/Makefile 315636 2013-03-31 13:43:10Z pgj $

PORTNAME=	uuagc
PORTVERSION=	0.9.42.2
PORTREVISION=	3
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Attribute Grammar System of Universiteit Utrecht

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	haskell-src-exts>=1.11.1 mtl>=1.1.1.1 uuagc-cabal>=1.0.2.0 \
		uulib>=0.9.14

EXECUTABLE=	uuagc

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
