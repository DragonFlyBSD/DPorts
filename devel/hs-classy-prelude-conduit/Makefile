# $FreeBSD: devel/hs-classy-prelude-conduit/Makefile 319894 2013-06-04 18:53:40Z pgj $

PORTNAME=	classy-prelude-conduit
PORTVERSION=	0.5.3
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Conduit instances for classy-prelude

LICENSE=	MIT

USE_CABAL=	classy-prelude>=0.5.3 conduit>=0.5.4.1 monad-control \
		resourcet transformers void xml-conduit>=1.0

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
