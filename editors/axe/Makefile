# Created by: John Capo <jc@irbs.com>
# $FreeBSD: editors/axe/Makefile 320825 2013-06-13 18:34:51Z wg $

PORTNAME=	aXe
PORTVERSION=	6.1.2
PORTREVISION=	3
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	editors
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Simple to use text editor for X

LIB_DEPENDS=	Xaw3d:${PORTSDIR}/x11-toolkits/Xaw3d

USE_IMAKE=	yes
USE_XORG=	ice sm x11 xaw xext xmu xpm xt
ALL_TARGET=	Xaw3d all
MAN1=		axe.1 axinfo.1
MAKE_JOBS_UNSAFE=	yes
CFLAGS=		-Wno-return-type

.include <bsd.port.mk>
