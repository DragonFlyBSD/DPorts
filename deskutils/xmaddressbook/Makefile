# Created by: shanee@augusta.de
# $FreeBSD: deskutils/xmaddressbook/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xmaddressbook
PORTVERSION=	1.5.3
PORTREVISION=	3
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	office
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	X11/Motif-based addressbook program

USES=		imake motif
USE_XORG=	ice sm x11 xext xi xp xt oldx
WRKSRC=		${WRKDIR}/xmaddressbook
MAN1=		xmaddressbook.1

NO_STAGE=	yes
.include <bsd.port.mk>
