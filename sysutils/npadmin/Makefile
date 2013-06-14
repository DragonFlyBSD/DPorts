# Created by: Dom Mitchell <dom@happygiraffe.net>
# $FreeBSD: sysutils/npadmin/Makefile 319255 2013-05-27 15:39:59Z bsam $

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

pre-configure:
	${RM} ${WRKSRC}/getopt.h ${WRKSRC}/getopt1.c

.include <bsd.port.mk>
