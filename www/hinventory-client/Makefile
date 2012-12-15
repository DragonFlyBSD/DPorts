# New ports collection makefile for:	hinventoryFreeBSD
# Date created:				14 July 2006
# Whom:					Thomas BRETON <tom@h-inventory.com>
#
# $FreeBSD: ports/www/hinventory-client/Makefile,v 1.2 2012/11/17 06:02:35 svnexp Exp $
#

PORTNAME=	hinventory-client
PORTVERSION=	1.2.5
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.h-inventory.com/
DISTNAME=	hinventoryFreeBSD-${PORTVERSION}

MAINTAINER=	tom@h-inventory.com
COMMENT=	H-Inventory Client for FreeBSD

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/hinventoryFreeBSD

do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/hinventory_FreeBSD.sh \
		${PREFIX}/bin/hinventory_FreeBSD.sh
	${INSTALL_DATA} ${WRKSRC}/hinventory.conf ${PREFIX}/etc/hinventory.conf

.include <bsd.port.mk>
