# Created by: Oliver Braun <obraun@FreeBSD.org>
# $FreeBSD: devel/hs-c2hs/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	c2hs
PORTVERSION=	0.16.4
PORTREVISION=	2
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	C->Haskell tool that gives some cross-language type safety

LICENSE=	GPLv2

USE_CABAL=	language-c>=0.3.1.1

XMLDOCS=	doc/users_guide:html

STANDALONE=	yes
EXECUTABLE=	c2hs

MAN1=		c2hs.1
MAN1SRC=	doc/man1

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
