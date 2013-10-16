# Created by: steinex
# $FreeBSD: net-mgmt/nagios-check_smartmon/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	check_smartmon
PORTVERSION=	20100318
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://nognu.de/s/FreeBSD/distfiles/
PKGNAMEPREFIX=	nagios-

MAINTAINER=	ports@bsdserwis.com
COMMENT=	Nagios plug-in to get status from smartmontools

RUN_DEPENDS=	${LOCALBASE}/sbin/smartctl:${PORTSDIR}/sysutils/smartmontools

USE_PYTHON=	yes
NO_BUILD=	yes

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_smartmon ${PREFIX}/libexec/nagios

.include <bsd.port.mk>
