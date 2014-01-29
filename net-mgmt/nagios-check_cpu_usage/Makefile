# Created by: jamrich.majo@gmail.com
# $FreeBSD: net-mgmt/nagios-check_cpu_usage/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
do-install:
	@${MKDIR} ${PREFIX}/libexec/nagios
	@${INSTALL_SCRIPT} ${.CURDIR}/src/check_cpu_usage ${PREFIX}/libexec/nagios

.include <bsd.port.mk>
