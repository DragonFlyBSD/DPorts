# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: ports/devel/hs-uniplate/Makefile,v 1.13 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	uniplate
PORTVERSION=	1.6.10
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Help writing simple, concise, and fast generic operations

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	hashable>=1.1.2.3 syb unordered-containers>=0.2.1

INSTALL_PORTDATA=	${INSTALL_DATA} ${WRKSRC}/uniplate.htm ${DATADIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
