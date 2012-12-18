# New ports collection makefile for:	asedit
# Date created:				28 Jul 1996
#
# Whom:	Andreas Kohout <shanee@augusta.de>
#
# $FreeBSD: ports/editors/asedit/Makefile,v 1.16 2012/11/17 05:57:11 svnexp Exp $
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
