# Created by: Phillip Neumann <pneumann@gmail.com>
# $FreeBSD: x11-themes/ubuntulooks/Makefile 341350 2014-01-27 09:06:26Z miwi $

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
USES=		pkgconfig gmake
USE_GNOME=	gtk20
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

.include <bsd.port.mk>
