# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: net/yazproxy/Makefile 330628 2013-10-17 11:01:51Z demon $

PORTNAME=	yazproxy
PORTVERSION=	1.3.9
CATEGORIES=	net
MASTER_SITES=	http://ftp.indexdata.dk/pub/yazproxy/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	A powerful general purpose Z39.50/SRW/SRU proxy

LIB_DEPENDS=	libyazpp.so:${PORTSDIR}/net/yaz++

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-shared --with-yazpp=${LOCALBASE}/bin
USE_LDCONFIG=	yes

MAN8=		yazproxy.8

NO_STAGE=	yes
.include <bsd.port.mk>
