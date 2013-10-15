# Created by: Jesse van den Kieboom <troplosti@orcaweb.cjb.net>
# $FreeBSD: sysutils/gksu/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	gksu
PORTVERSION=	2.0.2
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://people.debian.org/~kov/gksu/

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	Graphical frontend to su

LIB_DEPENDS=	gksu2:${PORTSDIR}/sysutils/libgksu \
		nautilus-extension:${PORTSDIR}/x11-fm/nautilus \
		gnome-keyring:${PORTSDIR}/security/gnome-keyring

USES=		desktop-file-utils pathfix pkgconfig
USE_GNOME=	gconf2 gnomeprefix gtk20 intlhack
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gksu.1
MLINKS=		gksu.1 gksudo.1

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|glib/gkeyfile.h|glib.h|g' \
		${WRKSRC}/nautilus-gksu/libnautilus-gksu.c

.include <bsd.port.mk>
