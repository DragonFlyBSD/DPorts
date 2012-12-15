# New ports collection makefile for:	gnome-devel-docs
# Date created:		2007-09-18
# Whom:			Michael Johnson <ahze@FreeBSD.org>
#
# $FreeBSD: ports/misc/gnome-devel-docs/Makefile,v 1.12 2012/11/17 05:59:37 svnexp Exp $
#   $MCom: ports/misc/gnome-devel-docs/Makefile,v 1.22 2010/09/29 15:17:53 kwm Exp $
#

PORTNAME=	gnome-devel-docs
PORTVERSION=	2.32.0
CATEGORIES=	misc gnome
MASTER_SITES=	GNOME
DIST_SUBDIR=	gnome2

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	Documents targeted for GNOME developers

BUILD_DEPENDS=	gnome-doc-prepare:${PORTSDIR}/textproc/gnome-doc-utils
RUN_DEPENDS=	gnome-doc-prepare:${PORTSDIR}/textproc/gnome-doc-utils

USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GMAKE=	yes
USE_GNOME=	gnomehier
INSTALLS_OMF=	yes

.include <bsd.port.mk>
