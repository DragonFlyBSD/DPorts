# New ports collection makefile for:	nagios-check_smartmon
# Date created:				2009-07-10
# Whom:					steinex
#
# $FreeBSD: ports/net-mgmt/nagios-check_smartmon/Makefile,v 1.5 2012/11/17 06:00:33 svnexp Exp $

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

do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	${INSTALL_SCRIPT} ${WRKSRC}/check_smartmon ${PREFIX}/libexec/nagios

.include <bsd.port.mk>
