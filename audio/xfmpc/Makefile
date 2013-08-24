# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: audio/xfmpc/Makefile 324744 2013-08-14 22:35:50Z ak $
#

PORTNAME=	xfmpc
PORTVERSION=	0.2.2
PORTREVISION=	3
CATEGORIES=	audio xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=/src/apps/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Graphical MPD client focusing on low footprint

LIB_DEPENDS=	mpd:${PORTSDIR}/audio/libmpd

USE_BZIP2=	yes
USE_GMAKE=	yes
INSTALLS_ICONS=	yes
USES=		gettext pkgconfig
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	configenv libmenu libutil

MAN1=	xfmpc.1

.include <bsd.port.mk>
