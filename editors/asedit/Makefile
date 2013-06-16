# New ports collection makefile for:	asedit
# Date created:				28 Jul 1996
#
# Whom:	Andreas Kohout <shanee@augusta.de>
#
# $FreeBSD: editors/asedit/Makefile 300896 2012-07-14 13:54:48Z beat $
#

PORTNAME=	asedit
PORTVERSION=	1.3.2
PORTREVISION=	4
CATEGORIES=	editors
MASTER_SITES=	${MASTER_SITE_XCONTRIB}
MASTER_SITE_SUBDIR=	editors
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Text editor for X/Motif

USE_MOTIF=	yes
USE_IMAKE=	yes
USE_XORG=	ice sm x11 xext xmu xp xt
XMKMF=		xmkmf

MAN1=		asedit.1

.include <bsd.port.mk>
