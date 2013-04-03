# Created by: Oliver Braun <obraun@FreeBSD.org>
# $FreeBSD: ports/devel/hs-idoc/Makefile,v 1.22 2013/02/05 22:47:09 svnexp Exp $

PORTNAME=	idoc
PORTVERSION=	0.2.6
PORTREVISION=	8
CATEGORIES=	devel haskell
MASTER_SITES=	http://www.cse.unsw.edu.au/~chak/haskell/idoc/
PKGNAMEPREFIX=	hs-

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	A No Frills Haskell Interface Documentation System

LICENSE=	GPLv2
FILE_LICENSE=	COPYING

BUILD_DEPENDS=	ghc:${PORTSDIR}/lang/ghc
LIB_DEPENDS+=	gmp.10:${PORTSDIR}/math/gmp \
		ffi.6:${PORTSDIR}/devel/libffi

PLIST_FILES=	bin/idoc
USE_GMAKE=	yes
MAKE_ARGS=	PREFIX="${PREFIX}"

ALL_TARGET=	# empty

post-patch:
	@${REINPLACE_CMD} -e 's|IOExts|Debug.Trace|' ${WRKSRC}/IDoc.hs

.include <bsd.port.mk>
