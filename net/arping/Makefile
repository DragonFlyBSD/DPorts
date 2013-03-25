# New ports collection makefile for:	arping
# Date Created:				1 Oct 2000
# Whom:					Roman Shterenzon <roman@xpert.com>
#
# $FreeBSD: ports/net/arping/Makefile,v 1.29 2013/02/18 21:46:32 svnexp Exp $
#

PORTNAME=	arping
PORTVERSION=	2.09
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://www.habets.pp.se/synscan/files/

MAINTAINER=	gavin@FreeBSD.org
COMMENT=	ARP level "ping" utility

LIB_DEPENDS=	net:${PORTSDIR}/net/libnet

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	LIBS="`${LIBNET_CONFIG} --libs` -lpcap"
CFLAGS+=	`${LIBNET_CONFIG} --defines`
CPPFLAGS+=	-I${LOCALBASE}/include `${LIBNET_CONFIG} --cflags`
LDFLAGS+=	-L${LOCALBASE}/lib

LIBNET_CONFIG?=	${LOCALBASE}/bin/libnet11-config

MAN8=		arping.8
PLIST_FILES=	sbin/arping

.include <bsd.port.mk>
