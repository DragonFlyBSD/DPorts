# Created by: jameskamlyn@gmail.com
# $FreeBSD: net/tableutil/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	tableutil
PORTVERSION=	0.6
CATEGORIES=	net
MASTER_SITES=	http://expiretable.fnord.se/

MAINTAINER=	jameskamlyn@gmail.com
COMMENT=	Utility for converting and aggregating lists of IP addresses

PLIST_FILES=	bin/tableutil
MAN1=		tableutil.1

NO_STAGE=	yes
do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin/
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${PREFIX}/man/man1/

.include <bsd.port.mk>
