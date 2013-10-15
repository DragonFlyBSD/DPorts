# Created by: Khairil Yusof <kaeru@inigo-tech.com>
# $FreeBSD: deskutils/tagutils/Makefile 327718 2013-09-20 16:21:37Z bapt $

PORTNAME=	tagutils
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://releases.chipx86.com/leaftag/tagutils/

MAINTAINER=	kaeru@inigo-tech.com
COMMENT=	A command line tool for tagging files

LIB_DEPENDS=	leaftag.0:${PORTSDIR}/devel/libleaftag

GNU_CONFIGURE=	yes
USES=		gmake pathfix pkgconfig
USE_GNOME=	glib20
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

NO_STAGE=	yes
.include <bsd.port.mk>
