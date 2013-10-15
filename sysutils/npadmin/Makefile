# Created by: Dom Mitchell <dom@happygiraffe.net>
# $FreeBSD: sysutils/npadmin/Makefile 327772 2013-09-20 23:05:58Z bapt $

PORTNAME=	npadmin
PORTVERSION=	0.8.7
PORTREVISION=	1
CATEGORIES=	sysutils print
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SNMP based command line network printer management tool

MAN1=		npadmin.1
PLIST_FILES=	bin/npadmin

GNU_CONFIGURE=	yes

NO_STAGE=	yes
pre-configure:
	${RM} ${WRKSRC}/getopt.h ${WRKSRC}/getopt1.c

.include <bsd.port.mk>
