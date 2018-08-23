# $FreeBSD: head/devel/qt5-linguisttools/Makefile 473503 2018-06-28 17:39:53Z tcberner $

PORTNAME=	linguisttools
DISTVERSION=	${QT5_VERSION}
CATEGORIES=	devel
PKGNAMEPREFIX=	qt5-

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Qt localization tools

USE_QT=		core xml buildtools_build qml_build
USES=		qmake qt-dist:5,tools

BUILD_WRKSRC=	${WRKSRC}/src/linguist
INSTALL_WRKSRC=	${WRKSRC}/src/linguist

post-patch:
	@${REINPLACE_CMD} -e '/SUBDIRS.*linguist/ d' \
		${WRKSRC}/src/linguist/linguist.pro

post-install:
.for f in lrelease lupdate
	${INSTALL_MAN} ${WRKSRC}/src/linguist/${f}/${f}.1 \
		${STAGEDIR}${MANPREFIX}/man/man1
.endfor

.include <bsd.port.mk>
