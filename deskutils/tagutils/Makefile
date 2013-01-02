# New ports collection makefile for:    tagutils
# Date Created:             24 May 2006
# Whom:                Khairil Yusof <kaeru@inigo-tech.com>
#
# $FreeBSD: ports/deskutils/tagutils/Makefile,v 1.5 2012/11/17 05:55:30 svnexp Exp $
#

PORTNAME=	tagutils
PORTVERSION=	0.3.0
PORTREVISION=	1
CATEGORIES=	deskutils
MASTER_SITES=	http://releases.chipx86.com/leaftag/tagutils/

MAINTAINER=	kaeru@inigo-tech.com
COMMENT=	A command line tool for tagging files

LIB_DEPENDS=	leaftag.0:${PORTSDIR}/devel/libleaftag

USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	gnomehack glib20 pkgconfig
USE_LDCONFIG=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
