# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: textproc/hs-feed/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	feed
PORTVERSION=	0.3.8
PORTREVISION=	10
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Interfacing with RSS (v 0.9x, 2.x, 1.0) + Atom feeds in Haskell

LICENSE=	BSD

USE_CABAL=	utf8-string xml>=1.2.6

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
