# New ports collection makefile for:    rmonitor
# Date created:         March 1st, 2001
# Whom:                 Konrad Heuer
#
# $FreeBSD: ports/sysutils/rmonitor/Makefile,v 1.8 2012/11/17 06:01:43 svnexp Exp $
#

PORTNAME=	rmonitor
PORTVERSION=	1.2
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	ftp://gwdu111.gwdg.de/pub/FreeBSD/misc/ \
		ftp://gwdu112.gwdg.de/pub/FreeBSD/misc/

MAINTAINER=	kheuer@gwdu60.gwdg.de
COMMENT=	Remote system monitoring utility

MAN1=		rmonitor.1
MANCOMPRESSED=	yes

#CFLAGS+=	-w

.include <bsd.port.pre.mk>

.if ${OSVERSION} >= 900007
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-utmpx
.endif

.include <bsd.port.post.mk>
