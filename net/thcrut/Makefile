# Created by: Kris Kennaway <kris@FreeBSD.org>
# $FreeBSD: net/thcrut/Makefile 340722 2014-01-22 17:00:46Z mat $

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
