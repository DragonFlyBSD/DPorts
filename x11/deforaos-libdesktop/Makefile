# Created by: Olivier Cochard-Labbe <olivier@cochard.me>
# $FreeBSD: ports/x11/deforaos-libdesktop/Makefile,v 1.1 2012/12/19 01:00:05 svnexp Exp $

PORTNAME=	libdesktop
PORTVERSION=	0.0.8
CATEGORIES=	x11
MASTER_SITES=	http://www.defora.org/os/download/download/3699/
DISTNAME=	libDesktop-${PORTVERSION}
PKGNAMEPREFIX=	deforaos-

MAINTAINER=	olivier@cochard.me
COMMENT=	DeforaOS desktop library

LICENSE=	GPLv3

LIB_DEPENDS=	System:${PORTSDIR}/devel/deforaos-libsystem

USE_GNOME=	gtk20
USE_PKGCONFIG=	build
USE_LDCONFIG=	yes

post-patch:
	${REINPLACE_CMD} -e 's|/lib/|/libdata/|g' \
		${WRKSRC}/data/pkgconfig.sh

.include <bsd.port.mk>
