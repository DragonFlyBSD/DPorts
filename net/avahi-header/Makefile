# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: net/avahi-header/Makefile 323006 2013-07-14 21:17:21Z kwm $
#   $MCom: ports/net/avahi-header/Makefile,v 1.4 2012/07/09 18:22:19 kwm Exp $

PORTREVISION=	0
CATEGORIES=	net
PKGNAMESUFFIX=	-header

COMMENT=	Install an avahi-gtk* header to avoid conflict

CONFLICT=	avahi-gtk-0.6.[0-2]*

MASTERDIR=	${.CURDIR}/../avahi-app
BUILD_WRKSRC=	${WRKSRC}/avahi-ui
INSTALL_WRKSRC=	${BUILD_WRKSRC}
DESCR=		${.CURDIR}/pkg-descr
PLIST=		${.CURDIR}/pkg-plist

AVAHI_SLAVE=	header

NO_BUILD=	yes

do-install:
	${MKDIR} ${PREFIX}/include/avahi-ui
	${INSTALL_DATA} ${BUILD_WRKSRC}/avahi-ui.h \
		${PREFIX}/include/avahi-ui/

.include "${MASTERDIR}/Makefile"
