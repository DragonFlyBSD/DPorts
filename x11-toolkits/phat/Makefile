# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: x11-toolkits/phat/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	phat
PORTVERSION=	0.4.1
PORTREVISION=	5
CATEGORIES=	x11-toolkits
MASTER_SITES=	${MASTER_SITE_BERLIOS}
MASTER_SITE_SUBDIR=	phat

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Collection of GTK+ widgets geared toward pro-audio apps

GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USES=		pathfix pkgconfig
USE_GNOME=	gtk20 libgnomecanvas
USE_LDCONFIG=	yes

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|g' \
		-e 's|-Werror||g' \
	    ${WRKSRC}/configure

.include <bsd.port.mk>
