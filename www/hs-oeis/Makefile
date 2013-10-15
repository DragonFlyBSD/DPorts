# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-oeis/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	oeis
PORTVERSION=	0.3.1
PORTREVISION=	6
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell interface to the Online Encyclopedia of Integer Sequences

LICENSE=	BSD

USE_CABAL=	HTTP>=4000.0.2 network>=2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
