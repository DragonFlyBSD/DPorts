# Created by: spf@xslt.cs.nccu.edu.tw
# $FreeBSD: net/ifstat/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	ifstat
PORTVERSION=	1.1
PORTREVISION=	5
CATEGORIES=	net
MASTER_SITES=	http://gael.roualland.free.fr/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Network interface statistics monitoring tool

GNU_CONFIGURE=	yes
USE_OPENSSL=	yes

OPTIONS_DEFINE=	SNMP

MAN1=		ifstat.1
PLIST_FILES=	bin/ifstat

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MSNMP}
LIB_DEPENDS+=	netsnmp.30:${PORTSDIR}/net-mgmt/net-snmp
.else
CONFIGURE_ARGS+=	--without-snmp
.endif

.include <bsd.port.mk>
