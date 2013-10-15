# Created by: Alexey Dokuchaev <danfe@regency.nsu.ru>
# $FreeBSD: x11-wm/peksystray/Makefile 327786 2013-09-21 00:01:16Z bapt $

PORTNAME=	peksystray
PORTVERSION=	0.4.0
PORTREVISION=	2
CATEGORIES=	x11-wm
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A system tray dockapp similar to the GNOME notification area applet

LICENSE=	GPLv2

USE_BZIP2=	yes
USE_XORG=	x11 ice sm
GNU_CONFIGURE=	yes

PLIST_FILES=	bin/peksystray

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|@x_includes@|| ; s|@x_libraries@||' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
