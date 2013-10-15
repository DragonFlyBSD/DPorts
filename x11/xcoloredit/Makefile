# Created by: Satoshi TAOKA
# $FreeBSD: x11/xcoloredit/Makefile 327777 2013-09-20 23:43:19Z bapt $

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

MANCOMPRESSED=	yes
MAN1=		xcoloredit.1
PLIST_FILES=	bin/xcoloredit

NO_STAGE=	yes
.include <bsd.port.mk>
