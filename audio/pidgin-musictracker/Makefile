# Created by: ports@c0decafe.net
# $FreeBSD: audio/pidgin-musictracker/Makefile 326513 2013-09-06 15:28:27Z bapt $

PORTNAME=	musictracker
PORTVERSION=	0.4.1
PORTREVISION=	8
CATEGORIES=	audio
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	pidgin-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Plugin for Pidgin to displays the music track currently playing

LICENSE=	GPLv2

BUILD_DEPENDS=	${LOCALBASE}/include/pidgin/pidgin.h:${PORTSDIR}/net-im/pidgin
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin
LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

USE_BZIP2=	yes
USES=		gmake pkgconfig
GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="-L${LOCALBASE}/lib"
CPPFLAGS+=	-I${LOCALBASE}/include -Wno-return-type

PLIST_FILES=	lib/pidgin/musictracker.a lib/pidgin/musictracker.la \
		lib/pidgin/musictracker.so

.include <bsd.port.mk>
