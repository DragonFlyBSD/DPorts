# Created by: David Thiel <lx@redundancy.redundancy.org>
# $FreeBSD: security/fwipe/Makefile 327769 2013-09-20 22:55:24Z bapt $

PORTNAME=	fwipe
PORTVERSION=	0.36
PORTREVISION=	1
CATEGORIES=	security
MASTER_SITES=	http://www.jeenyus.net/linux/software/fwipe/ \
		http://redundancy.redundancy.org/mirror/

MAINTAINER=	lx@FreeBSD.org
COMMENT=	djb-style file wiping utility

ALL_TARGET=	it
INSTALL_TARGET=	setup

PLIST_FILES=	bin/fwipe bin/fwipe0 bin/echo0
MAN1=		fwipe0.1 echo0.1 fwipe.1

NO_STAGE=	yes
post-extract:
	@${ECHO_CMD} "${CC} ${CFLAGS}" > ${WRKSRC}/conf-cc
	@${ECHO_CMD} "${CC} -s" > ${WRKSRC}/conf-ld
	@${ECHO_CMD} "${PREFIX}" > ${WRKSRC}/conf-home
	@${ECHO_CMD} "${PREFIX}" > ${WRKSRC}/conf-root

.include <bsd.port.mk>
