# Created by: Michael Johnson <ahze@FreeBSD.org
# $FreeBSD: net/avahi-qt4/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTREVISION=	0
CATEGORIES=	net
PKGNAMESUFFIX=	-qt4

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Qt 4 bindings to the Avahi mDNS system

LIB_DEPENDS=	libavahi-common.so:${PORTSDIR}/net/avahi-app

MASTERDIR=	${.CURDIR}/../avahi-app
BUILD_WRKSRC=	${WRKSRC}/avahi-qt
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

AVAHI_SLAVE=	qt4
USE_QT4=	corelib moc_build
AVAHI_PKGCONFIG=	avahi-qt4.pc

.include "${MASTERDIR}/Makefile"
