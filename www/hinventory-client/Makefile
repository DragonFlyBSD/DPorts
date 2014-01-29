# Created by: Thomas BRETON <tom@h-inventory.com>
# $FreeBSD: www/hinventory-client/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	hinventory-client
PORTVERSION=	1.2.5
CATEGORIES=	www
MASTER_SITES=	ftp://ftp.h-inventory.com/
DISTNAME=	hinventoryFreeBSD-${PORTVERSION}

MAINTAINER=	tom@h-inventory.com
COMMENT=	H-Inventory Client for FreeBSD

NO_BUILD=	yes
WRKSRC=		${WRKDIR}/hinventoryFreeBSD

NO_STAGE=	yes
do-install:
	${INSTALL_SCRIPT} ${WRKSRC}/hinventory_FreeBSD.sh \
		${PREFIX}/bin/hinventory_FreeBSD.sh
	${INSTALL_DATA} ${WRKSRC}/hinventory.conf ${PREFIX}/etc/hinventory.conf

.include <bsd.port.mk>
