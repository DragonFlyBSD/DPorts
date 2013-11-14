# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: audio/xfce4-mpc-plugin/Makefile 332714 2013-11-04 13:23:11Z olivierd $

PORTNAME=	xfce4-mpc-plugin
PORTVERSION=	0.4.4
PORTREVISION=	4
CATEGORIES=	audio xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Musicpd client plugin for the Xfce panel 

LICENSE=	BSD

LIB_DEPENDS=	libmpd.so:${PORTSDIR}/audio/libmpd
RUN_DEPENDS=	musicpd:${PORTSDIR}/audio/musicpd

USES=		gmake pkgconfig gettext
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 intltool intlhack
USE_XFCE=	configenv libexo libmenu panel

.include <bsd.port.mk>
