# New ports collection makefile for:	check_snmp_pkgvuln
# Date created:				2 November 2005
# Whom:					Jarrod Sayers <jarrod@netleader.com.au>
#
# $FreeBSD: ports/net-mgmt/check_snmp_pkgvuln/Makefile,v 1.7 2012/11/17 06:00:31 svnexp Exp $
#

PORTNAME=	check_snmp_pkgvuln
PORTVERSION=	0.01
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://www.cultdeadsheep.org/~clement/FreeBSD/nagios/
PKGNAMEPREFIX=	nagios-
PKGNAMESUFFIX=	-plugin

MAINTAINER=	jarrod@downtools.com.au
COMMENT=	Security vulnerability plugin for Nagios

RUN_DEPENDS=	snmpwalk:${PORTSDIR}/net-mgmt/net-snmp \
		portaudit:${PORTSDIR}/ports-mgmt/portaudit

NAGIOS_PLUGIN_DIR?=	libexec/nagios

NO_WRKSUBDIR=	yes

PLIST_SUB=	NAGIOS_PLUGIN_DIR=${NAGIOS_PLUGIN_DIR}

post-patch:
	${REINPLACE_CMD} -e 's|/usr/local/|${PREFIX}/|' ${WRKSRC}/${PORTNAME}

do-build:

do-install:
	@${MKDIR} ${PREFIX}/${NAGIOS_PLUGIN_DIR}
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/${NAGIOS_PLUGIN_DIR}

.include <bsd.port.mk>
