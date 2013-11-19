# Created by: Vanilla I. Shu <vanilla@FreeBSD.org>
# $FreeBSD: sysutils/xfsm/Makefile 334050 2013-11-17 02:58:44Z vanilla $

PORTNAME=	xfsm
PORTVERSION=	1.99
PORTREVISION=	1
CATEGORIES=	sysutils
MASTER_SITES=	${MASTER_SITE_SUNSITE}
MASTER_SITE_SUBDIR=	system/status/xstatus
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X File System Monitor

USES=		imake
USE_XORG=	xbitmaps x11 xext
MAKE_ARGS=	CC="${CC}" CCOPTIONS="-DFreeBSD"
PLIST_FILES=	bin/xfsm man/man1/${PORTNAME}.1.gz

.include <bsd.port.mk>
