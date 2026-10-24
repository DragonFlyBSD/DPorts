PORTNAME=	hlint
DISTVERSION=	3.10
PORTREVISION=	1
CATEGORIES=	devel haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Source code suggestions
WWW=		https://github.com/ndmitchell/hlint

LICENSE=	BSD3CLAUSE

USES=		cabal

dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if (tolower($$1) == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal

.include <bsd.port.mk>
