# Created by: Olivier Duchateau
# $FreeBSD: x11/xfce4-whiskermenu-plugin/Makefile 338915 2014-01-06 17:56:31Z olivierd $

PORTNAME=	xfce4-whiskermenu-plugin
PORTVERSION=	1.3.1
CATEGORIES=	x11 xfce
MASTER_SITES=	http://gottcode.org/${PORTNAME}/
DISTNAME=	${PORTNAME}-${PORTVERSION}-src
DIST_SUBDIR=	xfce4

MAINTAINER=	xfce@FreeBSD.org
COMMENT=	Alternate menu for the Xfce Desktop

LICENSE=	GPLv2

WRKSRC=	${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_BZIP2=	yes
USES=	pkgconfig cmake gettext
USE_GNOME=	gtk20
USE_XFCE=	configenv garcon libexo libmenu libutil panel
INSTALLS_ICONS=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=       -L${LOCALBASE}/lib

.include <bsd.port.mk>
