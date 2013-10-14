# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: print/cups-pk-helper/Makefile 327765 2013-09-20 22:43:59Z bapt $
#   $MCom: ports/print/cups-pk-helper/Makefile,v 1.1 2009/12/29 16:01:07 ahze Exp $

PORTNAME=	cups-pk-helper
PORTVERSION=	0.2.5
CATEGORIES=	print
MASTER_SITES=	http://www.freedesktop.org/software/${PORTNAME}/releases/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Helper that makes system-config-printer use PolicyKit

LIB_DEPENDS=	libcups.so:${PORTSDIR}/print/cups-client \
		libpolkit-gobject-1.so:${PORTSDIR}/sysutils/polkit

USE_XZ=		yes
USE_GNOME=	glib20 intlhack
USES=		gettext gmake pathfix pkgconfig
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/libs

NO_STAGE=	yes
.include <bsd.port.mk>
