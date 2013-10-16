# Created by: Sergey Akifyev <asa@gascom.ru>
# $FreeBSD: net-mgmt/zabbix2-agent/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	zabbix2
PKGNAMESUFFIX=	-agent
CATEGORIES=	net-mgmt

MASTERDIR=	${.CURDIR}/../zabbix2-server

PLIST=		${PKGDIR}/pkg-plist.agent

OPTIONSFILE=	${PORT_DBDIR}/${PORTNAME}${PKGNAMESUFFIX}/options
OPTIONS_DEFINE=	IPV6
OPTIONS_DEFAULT=	IPV6

NO_STAGE=	yes
.include <bsd.port.options.mk>
.include "${MASTERDIR}/Makefile"
