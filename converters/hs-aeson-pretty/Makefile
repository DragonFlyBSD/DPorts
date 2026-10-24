PORTNAME=	aeson-pretty
DISTVERSION=	0.8.11
CATEGORIES=	converters haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	JSON pretty-printing command-line tool
WWW=		https://hackage.haskell.org/package/aeson-pretty \
		https://github.com/informatikr/aeson-pretty

LICENSE=	BSD3CLAUSE

USES=		cabal

dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if ($$1 == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal

.include <bsd.port.mk>
