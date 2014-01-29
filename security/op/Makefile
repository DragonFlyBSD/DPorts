# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: security/op/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	op
PORTVERSION=	1.32
CATEGORIES=	security
MASTER_SITES=	http://swapoff.org/files/op/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Controlled privilege escalation tool

GNU_CONFIGURE=	yes

post-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/etc/op.d
	${INSTALL_DATA} -m 0600 ${WRKSRC}/${PORTNAME}.conf \
		${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf.sample

.if !exists(${STAGEDIR}${PREFIX}/etc/${PORTNAME}.conf)
	${INSTALL_DATA} -m 0600 ${WRKSRC}/${PORTNAME}.conf \
		${STAGEDIR}${PREFIX}/etc
.endif

.include <bsd.port.mk>
