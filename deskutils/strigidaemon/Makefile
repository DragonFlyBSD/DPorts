# $FreeBSD: deskutils/strigidaemon/Makefile 333412 2013-11-10 17:28:44Z rakuco $

PORTNAME=	strigidaemon
PORTVERSION=	${STRIGI_VERSION}
CATEGORIES=	deskutils
MASTER_SITES=	${STRIGI_MASTER_SITES}

MAINTAINER=	kde@FreeBSD.org
COMMENT=	Strigi desktop search: daemon

LIB_DEPENDS=	dbus-1:${PORTSDIR}/devel/dbus \
		streams:${PORTSDIR}/deskutils/libstreams \
		streamanalyzer:${PORTSDIR}/deskutils/libstreamanalyzer

USES=		pkgconfig
USE_FAM=	yes
USE_GNOME=	libxml2
USE_LDCONFIG=	yes

.include <${.CURDIR}/../strigi/Makefile.common>
.include <bsd.port.mk>
