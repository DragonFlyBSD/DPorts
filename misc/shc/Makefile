# Created by: Ying-Chieh Liao <ijliao@FreeBSD.org>
# $FreeBSD: misc/shc/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	shc
PORTVERSION=	3.8.9
CATEGORIES=	misc
MASTER_SITES=	http://www.datsi.fi.upm.es/~frosal/sources/ \
		CRITICAL
EXTRACT_SUFX=	.tgz

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Generic script compiler

MAN1=		shc.1
PLIST_FILES=	bin/shc

NO_STAGE=	yes
post-extract:
	@${RM} ${WRKSRC}/shc

do-build:
	${CC} ${CFLAGS} -o ${WRKSRC}/shc ${WRKSRC}/${PORTNAME}-${PORTVERSION}.c

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/shc ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/shc.1 ${MAN1PREFIX}/man/man1

.include <bsd.port.mk>
