# New ports collection makefile for: ical2html
# Date created:		Thu Apr 14 18:08:52 BST 2005
# Whom:			keiichi@iijlab.net
#
# $FreeBSD: ports/converters/ical2html/Makefile,v 1.9 2012/11/17 05:55:03 svnexp Exp $
#

PORTNAME=	ical2html
PORTVERSION=	2.0
CATEGORIES=	converters
MASTER_SITES=	http://www.w3.org/Tools/Ical2html/

MAINTAINER=	keiichi@iijlab.net
COMMENT=	Manipulation commands for iCalendar files

LIB_DEPENDS=	ical.44:${PORTSDIR}/devel/libical

GNU_CONFIGURE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include/libical -I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

.include <bsd.port.mk>
