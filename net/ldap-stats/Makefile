# New ports collection makefile for:	ldap-stats
# Date created:				Fri 09 Oct 2009
# Whom:					Alexey V. Degtyarev <alexey@renatasystems.org>
#
# $FreeBSD: ports/net/ldap-stats/Makefile,v 1.2 2012/11/17 06:00:04 svnexp Exp $
#

PORTNAME=	ldap-stats
PORTVERSION=	5.2
CATEGORIES=	net
MASTER_SITES=	ftp://ftp.renatasystems.org/pub/FreeBSD/ports/distfiles/

MAINTAINER=	alexey@renatasystems.org
COMMENT=	Program to generate OpenLDAP statistics reports

RUN_DEPENDS=	p5-Getopt-Long>=0:${PORTSDIR}/devel/p5-Getopt-Long

NO_BUILD=	yes
USE_PERL5=	yes

PLIST_FILES=	bin/ldap-stats

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/ldap-stats.pl ${PREFIX}/bin/ldap-stats

.include <bsd.port.mk>
