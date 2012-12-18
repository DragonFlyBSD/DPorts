# New ports collection makefile for:	downtime
# Date created:		17 July 2006
# Whom:			Nick Withers (nick@nickwithers.com)
#
# $FreeBSD: ports/sysutils/downtime/Makefile,v 1.13 2012/11/17 06:01:28 svnexp Exp $
#

PORTNAME=	downtime
PORTVERSION=	0.4.0
PORTREVISION=	2
CATEGORIES=	sysutils
MASTER_SITES=	http://www.nickwithers.com/downtime/

MAINTAINER=	nick@nickwithers.com
COMMENT=	A GTK-based shutdown manager using shutdown(8)

USE_GNOME=	gtk20 desktopfileutils

MAN1=		downtime.1
MANCOMPRESSED=	yes

post-install:
		-@update-desktop-database

.include <bsd.port.mk>
