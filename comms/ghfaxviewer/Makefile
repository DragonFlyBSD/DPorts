# Created by: Dominik Brettnacher <domi@saargate.de>
# $FreeBSD: ports/comms/ghfaxviewer/Makefile,v 1.29 2012/12/29 04:51:17 svnexp Exp $

PORTNAME=	ghfaxviewer
PORTVERSION=	0.22.0
PORTREVISION=	13
CATEGORIES=	comms
MASTER_SITES=	${MASTER_SITE_GNU}
MASTER_SITE_SUBDIR=	halifax

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GNOME compliant fax viewer capable of displaying TIFF G3 faxes

LIB_DEPENDS=	tiff.4:${PORTSDIR}/graphics/tiff

USE_GMAKE=	yes
USE_GNOME=	gnomeprefix gnomehack gconf gnomeprint
USE_AUTOTOOLS=	libtool
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=	halifax.1 ghfaxviewer.1

pre-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g ; \
		s|DATADIRNAME=lib|DATADIRNAME=share|g' ${WRKSRC}/configure

.include <bsd.port.mk>
