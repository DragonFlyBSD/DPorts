# $FreeBSD: textproc/hs-tagstream-conduit/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	tagstream-conduit
PORTVERSION=	0.5.4
PORTREVISION=	3
CATEGORIES=	textproc haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Streamlined HTML tag parser

LICENSE=	BSD

USE_CABAL=	attoparsec attoparsec-conduit>=0.5 blaze-builder \
		blaze-builder-conduit>=0.5 case-insensitive conduit>=0.5 \
		text transformers>=0.3

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
