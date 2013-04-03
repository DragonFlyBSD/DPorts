# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: ports/textproc/hs-tagsoup/Makefile,v 1.17 2013/02/05 22:47:14 svnexp Exp $

PORTNAME=	tagsoup
PORTVERSION=	0.12.8
PORTREVISION=	1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Parsing and extracting information from HTML/XML documents

LICENSE=	BSD

CABAL_SETUP=	Setup.hs

USE_CABAL=	text

INSTALL_PORTDATA=	cd ${WRKSRC} && \
			  ${INSTALL_DATA} ${WRKSRC}/tagsoup.htm ${DATADIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
