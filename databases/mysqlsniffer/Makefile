# Created by: Frederic Hardy <frederic.hardy@mageekbox.net>
# $FreeBSD: databases/mysqlsniffer/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	mysqlsniffer
PORTVERSION=	1.2
CATEGORIES=	databases
MASTER_SITES=	http://hackmysql.com/code/
DISTNAME=	mysqlsniffer
EXTRACT_SUFX=	.tgz

MAINTAINER=	frederic.hardy@mageekbox.net
COMMENT=	Tcpdump clone specifically for MySQL

NO_WRKSUBDIR=	yes
PLIST_FILES=	bin/mysqlsniffer

NO_STAGE=	yes
do-build:
	${CC} -lpcap -o ${WRKSRC}/${PORTNAME} ${WRKSRC}/mysqlsniffer.c ${WRKSRC}/packet_handlers.c ${WRKSRC}/misc.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
