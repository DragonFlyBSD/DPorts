# Created by: Anders Troback
# $FreeBSD: ports/net-mgmt/nagios-check_bacula/Makefile,v 1.11 2012/12/16 16:36:38 svnexp Exp $

PORTNAME=	bacula
CATEGORIES=	net-mgmt
PKGNAMEPREFIX=	nagios-check_
PKGNAMESUFFIX=	#

MAINTAINER=	freebsd@troback.com
COMMENT=	Nagios plugin for Bacula

LIB_DEPENDS+=	bac:${PORTSDIR}/sysutils/bacula-client
UNIQUENAME=	${PKGNAMEPREFIX}${PORTNAME}

WITH_NAGIOS_CHECK_ONLY=	yes
MASTERDIR=	${.CURDIR}/../../sysutils/bacula-server

CONFIGURE_ARGS=	--enable-client-only	\
		--disable-build-dird	\
		--disable-build-stored	\
		--disable-nls		\
		--disable-xatt

OPTIONS_DEFINE=	#

.include "${MASTERDIR}/Makefile"
