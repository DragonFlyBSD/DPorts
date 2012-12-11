# New ports collection makefile for:	yazproxy
# Date created:				3 May 2004
# Whom:					Dmitry Sivachenko <demon@FreeBSD.org>
#
# $FreeBSD: ports/net/yazproxy/Makefile,v 1.11 2012/11/17 06:00:25 svnexp Exp $
#

PORTNAME=	yazproxy
PORTVERSION=	1.3.7
CATEGORIES=	net
MASTER_SITES=	http://ftp.indexdata.dk/pub/yazproxy/

MAINTAINER=	demon@FreeBSD.org
COMMENT=	A powerful general purpose Z39.50/SRW/SRU proxy

LIB_DEPENDS=	yazpp:${PORTSDIR}/net/yaz++

GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=--enable-shared --with-yazpp=${LOCALBASE}/bin
USE_LDCONFIG=	yes

MAN8=		yazproxy.8

.include <bsd.port.mk>
