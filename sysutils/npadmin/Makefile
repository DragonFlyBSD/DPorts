# Created by: Dom Mitchell <dom@happygiraffe.net>
# $FreeBSD: sysutils/npadmin/Makefile 333882 2013-11-15 16:05:56Z vanilla $

PORTNAME=	npadmin
PORTVERSION=	0.8.7
PORTREVISION=	1
CATEGORIES=	sysutils print
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SNMP based command line network printer management tool

GNU_CONFIGURE=	yes

PLIST_FILES=	bin/npadmin man/man1/${PORTNAME}.1.gz

pre-configure:
	${RM} ${WRKSRC}/getopt.h ${WRKSRC}/getopt1.c

.include <bsd.port.mk>
