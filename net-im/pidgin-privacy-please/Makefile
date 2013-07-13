# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: net-im/pidgin-privacy-please/Makefile 322530 2013-07-08 18:42:15Z ehaupt $

PORTNAME=	pidgin-privacy-please
PORTVERSION=	0.7.1
PORTREVISION=	2
CATEGORIES=	net-im
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Privacy plugin for the pidgin instant messenger

LICENSE=	GPLv2

LIB_DEPENDS=	purple.10:${PORTSDIR}/net-im/libpurple
BUILD_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin

GNU_CONFIGURE=	yes
USES=		gettext gmake
USE_GNOME=	gtk20
USE_LDCONFIG=	${PREFIX}/lib/pidgin
MAKE_JOBS_SAFE=	yes

.include <bsd.port.mk>
