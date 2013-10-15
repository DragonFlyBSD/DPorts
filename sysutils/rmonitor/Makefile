# Created by: Konrad Heuer
# $FreeBSD: sysutils/rmonitor/Makefile 327772 2013-09-20 23:05:58Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.pre.mk>

.if ${OSVERSION} >= 900007
EXTRA_PATCHES+=	${FILESDIR}/extra-patch-utmpx
.endif

.include <bsd.port.post.mk>
