# Created by: Dmitry Sivachenko <demon@FreeBSD.org>
# $FreeBSD: net/yaz++/Makefile 329450 2013-10-05 12:54:44Z demon $

PORTNAME=	yaz++
PORTVERSION=	1.5.0
CATEGORIES=	net
MASTER_SITES=	http://ftp.indexdata.dk/pub/yazpp/
DISTNAME=	yazpp-${PORTVERSION}

MAINTAINER=	demon@FreeBSD.org
COMMENT=	C++ toolkit for development of Z39.50v3 clients and servers

LIB_DEPENDS=	yaz.4:${PORTSDIR}/net/yaz

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-shared --with-yaz=${LOCALBASE}/bin
USE_LDCONFIG=	yes

MAN1=		yazpp-config.1

NO_STAGE=	yes
.include <bsd.port.mk>
