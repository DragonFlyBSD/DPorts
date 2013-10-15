# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: textproc/supercat/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	supercat
PORTVERSION=	0.5.5
CATEGORIES=	textproc
MASTER_SITES=	http://supercat.nosredna.net/

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Regexp-based text colorizer with ASCII/HTML output

GNU_CONFIGURE=	yes
MAN1=		spc.1
PORT_VERBS=	${PORTNAME} spc

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|/etc/supercat|${ETCDIR}|' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e 's|c:C:dDhmnrt:vS|&Rw|' ${WRKSRC}/src/spc.c

.include <bsd.port.mk>
