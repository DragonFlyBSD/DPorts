# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-oeis/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	oeis
PORTVERSION=	0.3.1
PORTREVISION=	7
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell interface to the Online Encyclopedia of Integer Sequences

LICENSE=	BSD

USE_CABAL=	HTTP>=4000.0.2 network>=2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
