# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: x11-themes/ubuntulooks/Makefile 327783 2013-09-20 23:54:03Z bapt $

PORTNAME=	ubuntulooks
PORTVERSION=	0.9.12
PORTREVISION=	8
CATEGORIES=	x11-themes
MASTER_SITES=	http://archive.ubuntu.com/ubuntu/pool/main/u/ubuntulooks/
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	pneumann@gmail.com
COMMENT=	GTK+ 2.x engine from Ubuntu Dapper

BUILD_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtk-engines-2.pc:${PORTSDIR}/x11-themes/gtk-engines2
RUN_DEPENDS=	${LOCALBASE}/libdata/pkgconfig/gtk-engines-2.pc:${PORTSDIR}/x11-themes/gtk-engines2

GNU_CONFIGURE=	yes
USES=		pkgconfig
USE_GMAKE=	yes
USE_GNOME=	gtk20
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

NO_STAGE=	yes
.include <bsd.port.mk>
