# $FreeBSD: textproc/hs-attoparsec-conduit/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	attoparsec-conduit
PORTVERSION=	1.0.1
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Consume attoparsec parsers via conduit

LICENSE=	BSD

USE_CABAL=	attoparsec>=0.10 conduit>=1.0 text>=0.11 transformers>=0.2.2

NO_STAGE=	yes
.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
