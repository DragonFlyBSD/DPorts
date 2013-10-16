# Created by: Pav Lucistnik <pav@oook.cz>
# $FreeBSD: multimedia/xmms-status-plugin/Makefile 327747 2013-09-20 20:57:48Z bapt $

PORTNAME=	xmms-status-plugin
PORTVERSION=	1.0
PORTREVISION=	4
CATEGORIES=	multimedia
MASTER_SITES=	http://www.hellion.org.uk/source/

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	XMMS control applet for GNOME 2 panel / KDE tray

LIB_DEPENDS=	xmms.4:${PORTSDIR}/multimedia/xmms

USE_XORG=	x11 xpm
USE_GMAKE=	yes
USE_LDCONFIG=	yes
USE_AUTOTOOLS=	libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e 's,-Werror,,' ${WRKSRC}/configure

.include <bsd.port.mk>
