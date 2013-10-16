# Created by: Martin Wilke (miwi@FreeBSD.org)
# $FreeBSD: www/xfce4-smartbookmark-plugin/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	xfce4-smartbookmark-plugin
PORTVERSION=	0.4.5
PORTREVISION=	1
CATEGORIES=	www xfce
MASTER_SITES=	${MASTER_SITE_XFCE}
MASTER_SITE_SUBDIR=	src/panel-plugins/${PORTNAME}/${PORTVERSION:R}
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Query search engines from the Xfce panel

USE_BZIP2=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gtk20 intltool intlhack
USES=		pkgconfig gettext
USE_XFCE=	configenv libexo libmenu libutil panel
USE_XORG=	ice

NO_STAGE=	yes
.include <bsd.port.mk>
