# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: devel/liblogging/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	liblogging
PORTVERSION=	0.7.1
CATEGORIES=	devel
MASTER_SITES=	CENKES http://download.rsyslog.com/liblogging/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Easy to use system logging library

USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--disable-static

post-patch:
	@${REINPLACE_CMD} -e '/^pkgconfigdir =/s|=.*| \
		= ${PREFIX}/libdata/pkgconfig|' ${WRKSRC}/Makefile.in

.include <bsd.port.mk>
