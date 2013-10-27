# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: math/hs-mwc-random/Makefile 331644 2013-10-26 00:52:33Z gerald $

PORTNAME=	mwc-random
PORTVERSION=	0.12.0.1
PORTREVISION=	3
CATEGORIES=	math haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Fast, high quality pseudo random number generation

LICENSE=	BSD

USE_CABAL=	primitive vector>=0.7

INSTALL_PORTDATA=	${INSTALL_DATA} ${WRKSRC}/README.markdown ${DATADIR}

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
