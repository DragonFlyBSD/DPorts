# Created by: Joe Marcus Clarke <marcus@marcuscom.com>
# $FreeBSD: palm/gnome-pilot/Makefile 314861 2013-03-21 18:46:17Z bapt $

PORTNAME=	gnome-pilot
PORTVERSION=	2.0.17
PORTREVISION=	6
CATEGORIES=	palm comms gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	PalmPilot conduit system for GNOME 2

BUILD_DEPENDS=	gob2:${PORTSDIR}/devel/gob2
LIB_DEPENDS=	pisock.9:${PORTSDIR}/palm/pilot-link

USES=		pathfix
USE_BZIP2=	yes
USE_GMAKE=	yes
USE_PKGCONFIG=	build
USE_GNOME=	gnomeprefix gnomehier gnomepanel intlhack \
		ltverhack libgnomeui
USE_GETTEXT=	yes
USE_AUTOTOOLS=	libtool
INSTALLS_OMF=	yes
USE_LDCONFIG=	yes
CONFIGURE_ARGS=	--with-pisock=${LOCALBASE}
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gpilot-install-file.1
GCONF_SCHEMAS=	pilot.schemas

.include <bsd.port.mk>
