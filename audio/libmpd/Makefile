# Created by: Stepan Zastupov [RedChrom] <redchrom@gmail.com>
# $FreeBSD: audio/libmpd/Makefile 325966 2013-09-02 10:06:03Z bapt $

PORTNAME=	libmpd
PORTVERSION=	11.8.17
CATEGORIES=	audio
MASTER_SITES=	http://download.sarine.nl/Programs/gmpc/11.8.16/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Abstraction around libmpdclient

USE_AUTOTOOLS=	libtool
GNU_CONFIGURE=	yes
USES=		pathfix pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes

post-patch:
	@${REINPLACE_CMD} -e 's,libmpd-1.0\/libmpd,libmpd,' \
		${WRKSRC}/src/Makefile.in

.include <bsd.port.mk>
