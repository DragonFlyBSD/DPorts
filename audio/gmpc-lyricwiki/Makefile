# Created by: Martin Wilke <miwi@FreeBSD.org>
# $FreeBSD: audio/gmpc-lyricwiki/Makefile 325727 2013-08-30 23:01:05Z bapt $

PORTNAME=	gmpc-lyricwiki
PORTVERSION=	11.8.16
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/${PORTVERSION}/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A Lyricswiki Provider plugin for gmpc

LIB_DEPENDS=	mpd.4:${PORTSDIR}/audio/libmpd
BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gmpc.pc:${PORTSDIR}/audio/gmpc
RUN_DEPENDS=	gmpc:${PORTSDIR}/audio/gmpc

GNU_CONFIGURE=	yes
USE_GNOME=	intltool glib20 gtk20 libxml2
USES=		gettext gmake pathfix pkgconfig

.include <bsd.port.mk>
