# New ports collection makefile for:	nagios-check_clamav
# Date created:				Fri 12 Jun 2009
# Whom:					Alexey V. Degtyarev
#
# $FreeBSD: ports/net-mgmt/nagios-check_clamav/Makefile,v 1.3 2012/11/17 06:00:33 svnexp Exp $
#

PORTNAME=	check_clamav
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	net-mgmt
MASTER_SITES=	ftp://ftp.renatasystems.org/pub/FreeBSD/ports/distfiles/
PKGNAMEPREFIX=	nagios-

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Nagios plugin that verifies ClamAV local signature database revision

NO_BUILD=	yes
USE_PERL5_RUN=	yes

RUN_DEPENDS+=	${LOCALBASE}/libexec/nagios/utils.pm:${PORTSDIR}/net-mgmt/nagios-plugins \
		clamav>=0:${PORTSDIR}/security/clamav \
		p5-Net-DNS>=0:${PORTSDIR}/dns/p5-Net-DNS

PLIST_FILES=	libexec/nagios/check_clamav

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/check_clamav \
		${PREFIX}/libexec/nagios/check_clamav

.include <bsd.port.mk>
