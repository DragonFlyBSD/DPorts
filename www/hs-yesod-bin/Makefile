PORTNAME=	yesod-bin
DISTVERSION=	1.6.2.4
PORTREVISION=	1
CATEGORIES=	www haskell

MAINTAINER=	haskell@FreeBSD.org
COMMENT=	Yesod helper executable
WWW=		https://www.yesodweb.com/

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libinotify.so:devel/libinotify

USES=		cabal

CABAL_EXECUTABLES=	yesod

IGNORE= unmaintained, please request fixing to users mailing list
dfly-patch:
	mv ${WRKSRC}/${PORTNAME}.cabal ${WRKSRC}/${PORTNAME}.cabal.orig
	awk '{print; if (tolower($$1) == "executable") {print "    extra-libraries: m"}}' \
		${WRKSRC}/${PORTNAME}.cabal.orig > ${WRKSRC}/${PORTNAME}.cabal

.include <bsd.port.mk>
