# Created by: Oliver Braun <obraun@informatik.unibw-muenchen.de>
# $FreeBSD: ports/devel/hs-haddock/Makefile,v 1.47 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	haddock
PORTVERSION=	2.11.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A documentation-generation tool for Haskell libraries

LICENSE=	BSD

USE_CABAL=	ghc-paths xhtml>=3000.2

USE_ALEX=	true
USE_HAPPY=	true

EXECUTABLE=	haddock-${PORTVERSION}

PLIST_SUB+=	GHC_HADDOCK_CMD=${GHC_HADDOCK_CMD} HADDOCK=${PREFIX}/bin/haddock EXECUTABLE=${PREFIX}/bin/${EXECUTABLE}

CONFIGURE_ARGS+=	--program-suffix=-${PORTVERSION}

post-install::
	@${LN} -sf ${PREFIX}/bin/${EXECUTABLE} ${PREFIX}/bin/haddock

.include "${.CURDIR}/../../lang/ghc/bsd.cabal.mk"
.include <bsd.port.mk>
