# Created by: Michael Johnson <ahze@FreeBSD.org>
# $FreeBSD: sysutils/serpentine/Makefile 333988 2013-11-16 12:33:15Z vanilla $
#    $MCom: ports/sysutils/serpentine/Makefile,v 1.4 2006/08/31 05:21:45 marcus Exp $

PORTNAME=	serpentine
PORTVERSION=	0.7
PORTREVISION=	9
CATEGORIES=	sysutils
MASTER_SITES=	BERLIOS

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Gnome Audio Cd Burner

BUILD_DEPENDS=	xmlproc_parse:${PORTSDIR}/textproc/py-xml
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		pkgconfig
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	pygnomedesktop intlhack
USE_GMAKE=	yes
USE_GSTREAMER=	core gnomevfs python
USE_PYTHON=	2.4+

.include <bsd.port.mk>
