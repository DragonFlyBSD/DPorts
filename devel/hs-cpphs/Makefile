PORTNAME=	cpphs
PORTVERSION=	1.20.10
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Liberalised re-implementation of cpp, the C pre-processor
WWW=		https://projects.haskell.org/cpphs/

LICENSE=	LGPL21

USES=		cabal

USE_CABAL=	polyparse-1.13.1

dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if (tolower($$1) == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal

.include <bsd.port.mk>
