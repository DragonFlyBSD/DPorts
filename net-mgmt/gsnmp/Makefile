# New ports collection makefile for:	gsnmp
# Date created:				Sat Jun  9 19:34:09 PDT 2007
# Whom:					Matt Peterson <matt@peterson.org>
#
# $FreeBSD: ports/net-mgmt/gsnmp/Makefile,v 1.6 2012/11/17 06:00:32 svnexp Exp $
#

PORTNAME=	gsnmp
PORTVERSION=	0.2.0
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	ftp://ftp.ibr.cs.tu-bs.de/local/${PORTNAME}/ \
		http://ftp-ext.osuosl.org/pub/nslu2/sources/ \
		http://matt.peterson.org/FreeBSD/ports/

MAINTAINER=	matt@peterson.org
COMMENT=	SNMP library written on top of glib and gnet2

LIB_DEPENDS=	gnet:${PORTSDIR}/net/gnet2

USE_GNOME=	gnomehack glib20
GNU_CONFIGURE=	yes
USE_LDCONFIG=	yes

MAN1=		gsnmp-get.1

.include <bsd.port.mk>
