# Created by: Satoshi TAOKA
# $FreeBSD: x11/xcoloredit/Makefile 321957 2013-06-28 11:51:05Z bapt $

PORTNAME=	xcoloredit
PORTVERSION=	1.2
PORTREVISION=	2
CATEGORIES=	x11
MASTER_SITES=	XCONTRIB/../R5contrib
DISTNAME=	${PORTNAME}
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Find colour values by graphical colour mixing

USES=		imake
USE_XORG=	ice sm x11 xaw xext xmu xpm xt
MAKE_JOBS_SAFE=	yes

MANCOMPRESSED=	yes
MAN1=		xcoloredit.1
PLIST_FILES=	bin/xcoloredit

.include <bsd.port.mk>
