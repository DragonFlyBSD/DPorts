# Created by: Maxim Samsonov <xors@sendmail.ru>
# $FreeBSD: ports/devel/dbus-qt3/Makefile,v 1.13 2013/02/14 10:22:06 svnexp Exp $

PORTNAME=	dbus
PORTVERSION=	0.70
PORTREVISION=	6
CATEGORIES=	devel kde
MASTER_SITES=	${MASTER_SITE_GENTOO}
MASTER_SITE_SUBDIR=	distfiles
PKGNAMESUFFIX=	-qt3
DISTNAME=	${PORTNAME}${PKGNAMESUFFIX}-${PORTVERSION}

MAINTAINER=	xors@mailup.net
COMMENT=	Qt3 bindings for the D-BUS messaging system

LIB_DEPENDS=	dbus-1:${PORTSDIR}/devel/dbus \
		qt-mt:${PORTSDIR}/x11-toolkits/qt33

USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes
CONFIGURE_ENV=	QTDIR=${LOCALBASE}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_SUB=	VERSION="1.0"

.include <bsd.port.mk>
