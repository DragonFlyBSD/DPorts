# Created by: Alexander Logvinov <ports@logvinov.com>
# $FreeBSD: deskutils/libopensync-plugin-synce-legacy/Makefile 336190 2013-12-11 18:28:10Z bapt $

PORTNAME=	libopensync-plugin-synce
PORTVERSION=	0.22.1
CATEGORIES=	deskutils palm
MASTER_SITES=	SF/synce/SynCE/0.14
PKGNAMESUFFIX=	-legacy
DISTNAME=	${PORTNAME}-rra-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SynCE legacy plugin for the OpenSync framework

LIB_DEPENDS=	libopensync.so:${PORTSDIR}/devel/libopensync022 \
		librra.so:${PORTSDIR}/palm/synce-librra

USES=		pkgconfig
GNU_CONFIGURE=	yes
USE_GNOME=	glib20 libxml2

CFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

NO_STAGE=	yes
.include <bsd.port.mk>
