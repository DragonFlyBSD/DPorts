# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: deskutils/qrfcview/Makefile 321132 2013-06-17 15:27:58Z amdmi3 $

PORTNAME=	qrfcview
PORTVERSION=	0.62
PORTREVISION=	5
CATEGORIES=	deskutils
MASTER_SITES=	CENKES BERLIOS
EXTRACT_SUFX=	.tgz

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	Graphical RFC viewer

USE_QT4=	gui network corelib qmake_build uic_build moc_build rcc_build
PLIST_FILES=	bin/qRFCView

do-configure:
	@cd ${BUILD_WRKSRC}; ${SETENV} ${MAKE_ENV} ${QMAKE} -unix rfcview.pro

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/bin/qRFCView ${PREFIX}/bin/

.include <bsd.port.mk>
