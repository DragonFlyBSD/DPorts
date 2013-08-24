# $FreeBSD: deskutils/strigiclient/Makefile 324744 2013-08-14 22:35:50Z ak $

PORTNAME=	strigiclient
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: Qt4 GUI

LIB_DEPENDS=	streams:${PORTSDIR}/deskutils/libstreams \
		streamanalyzer:${PORTSDIR}/deskutils/libstreamanalyzer \
		searchclient:${PORTSDIR}/deskutils/strigidaemon

USE_QT4=	corelib gui dbus moc_build uic_build qmake_build rcc_build
USE_LDCONFIG=	yes

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
