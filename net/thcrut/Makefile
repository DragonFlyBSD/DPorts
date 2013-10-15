# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: net/thcrut/Makefile 328226 2013-09-25 00:54:08Z bdrewery $

PORTNAME=	thcrut
PORTVERSION=	1.2.5
CATEGORIES=	net
MASTER_SITES=	http://thc.org/releases/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	Local network discovery tool

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--with-libnet=${LOCALBASE} \
		 	--sysconfdir=${DATADIR}

.include <bsd.port.mk>
