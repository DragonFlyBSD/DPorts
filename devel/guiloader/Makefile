# Created by: Yinghong Liu <relaxbsd@gmail.com>
# $FreeBSD: devel/guiloader/Makefile 326089 2013-09-02 21:04:00Z bapt $

PORTNAME=	guiloader
PORTVERSION=	2.19.0
PORTREVISION=	1
CATEGORIES=	devel gnome
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A high-performance and compact GuiXml loader library

PROJECTHOST=	nothing-personal
USE_BZIP2=	yes
USES=        pathfix gettext gmake pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-hidden-visibility
USE_LDCONFIG=	yes

.include <bsd.port.mk>
