PORTNAME=	hoogle
DISTVERSION=	5.0.19.0
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Haskell API Search
WWW=		https://www.haskell.org/hoogle/

LICENSE=	BSD3CLAUSE

RUN_DEPENDS=	ca_root_nss>=0:security/ca_root_nss

USES=		cabal

CABAL_REVISION=	2

dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if (tolower($$1) == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal

.include <bsd.port.mk>
