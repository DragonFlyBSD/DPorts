# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: www/hs-scgi/Makefile 331644 2013-10-26 00:52:33Z gerald $

# deprecated: use wai

PORTNAME=	scgi
PORTVERSION=	0.3.3
PORTREVISION=	8
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell library for writing SCGI programs

LICENSE=	BSD

USE_CABAL=	cgi network>=2.2.3

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
