# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: net/libfixbuf/Makefile 316355 2013-04-23 14:20:25Z bapt $

PORTNAME=	libfixbuf
PORTVERSION=	1.0.2
CATEGORIES=	net
MASTER_SITES=	http://tools.netsa.cert.org/releases/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Library for using the IP Flow Information Export protocol

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's|echo aout|echo elf|' ${WRKSRC}/configure

.include <bsd.port.mk>
