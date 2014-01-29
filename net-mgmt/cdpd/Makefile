# Created by: Alexandre Snarskii <snar@paranoia.ru>
# $FreeBSD: net-mgmt/cdpd/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	cdpd
PORTVERSION=	1.0.4.1
CATEGORIES=	net-mgmt
MASTER_SITES=	http://snar.spb.ru/prog/cdpd/

MAINTAINER=	sem@FreeBSD.org
COMMENT=	A daemon to send CDP/LLDP announces over ethernet

GNU_CONFIGURE=	yes
EXTRACT_SUFX=	.tgz

USE_RC_SUBR=	cdpd
PLIST_FILES=	sbin/cdpd

MAN8=	cdpd.8

NO_STAGE=	yes
do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/cdpd ${PREFIX}/sbin
	@${INSTALL_MAN} ${WRKSRC}/cdpd.8 ${MAN8PREFIX}/man/man8

.include <bsd.port.mk>
