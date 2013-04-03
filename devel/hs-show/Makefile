# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: devel/hs-show/Makefile 315580 2013-03-29 22:43:58Z pgj $

PORTNAME=	show
PORTVERSION=	0.5
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	'Show' instances for Lambdabot

LICENSE=	GPLv2

CABAL_SETUP=	Setup.hs

USE_CABAL=	QuickCheck>=2.4 random simple-reflect smallcheck>=1.0 \
		syb

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
