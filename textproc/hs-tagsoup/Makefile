# Created by: Giuseppe Pilichi aka Jacula Modyun <jacula@gmail.com>
# $FreeBSD: textproc/hs-tagsoup/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tagsoup
PORTVERSION=	0.12.8
PORTREVISION=	4
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Parsing and extracting information from HTML/XML documents

LICENSE=	BSD

USE_CABAL=	text

INSTALL_PORTDATA=	${INSTALL_DATA} ${WRKSRC}/tagsoup.htm ${STAGEDIR}${DATADIR}

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
