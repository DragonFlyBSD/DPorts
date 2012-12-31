# ex:ts=8
# Ports collection makefile for:	gregexp
# Date created:			May 4, 2004
# Whom:				ijliao
#
# $FreeBSD: ports/misc/gregexp/Makefile,v 1.18 2012/12/10 19:24:03 svnexp Exp $
#

PORTNAME=	gregexp
PORTVERSION=	0.3
PORTREVISION=	13
CATEGORIES=	misc
MASTER_SITES=	http://dentrassi.de/download/gregexp/%SUBDIR%/
MASTER_SITE_SUBDIR=	${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A graphical regular expression explorer

LIB_DEPENDS=	pcre.3:${PORTSDIR}/devel/pcre

USE_GNOME=	gnomeprefix libgnomeui
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
