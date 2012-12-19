# New ports collection makefile for:	nagios-check_cpu_usage
# Date created:				2010-11-23
# Whom:					jamrich.majo@gmail.com
#
# $FreeBSD: ports/net-mgmt/nagios-check_cpu_usage/Makefile,v 1.3 2012/11/17 06:00:33 svnexp Exp $
#

PORTNAME=	nagios-check_cpu_usage
PORTVERSION=	1.0
CATEGORIES=	net-mgmt
MASTER_SITES=	# none
DISTFILES=	# none

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nagios plug-in to check CPU usage

NO_BUILD=	yes

PLIST_DIRSTRY=	libexec/nagios
PLIST_FILES=	libexec/nagios/check_cpu_usage

do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	@${INSTALL_SCRIPT} ${.CURDIR}/src/check_cpu_usage ${PREFIX}/libexec/nagios

.include <bsd.port.mk>
