# New ports collection makefile for:	op
# Date created:				30 Sep 2008
# Whom:					Emanuel Haupt <ehaupt@FreeBSD.org>
#
# $FreeBSD: ports/security/op/Makefile,v 1.21 2012/11/17 06:01:09 svnexp Exp $
#

PORTNAME=	op
PORTVERSION=	1.32
CATEGORIES=	security
MASTER_SITES=	http://swapoff.org/files/op/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Controlled privilege escalation tool

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		op.1

post-install:
	${MKDIR} ${PREFIX}/etc/op.d
	${INSTALL_DATA} -m 0600 ${WRKSRC}/${PORTNAME}.conf \
		${PREFIX}/etc/${PORTNAME}.conf.sample

.if !exists(${PREFIX}/etc/${PORTNAME}.conf)
	${INSTALL_DATA} -m 0600 ${WRKSRC}/${PORTNAME}.conf ${PREFIX}/etc
.endif

.include <bsd.port.mk>
