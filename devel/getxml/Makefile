# ex:ts=8
# New ports collection makefile for:	getxml
# Date created:			Jul 30, 2001
# Whom:				ijliao
#
# $FreeBSD: ports/devel/getxml/Makefile,v 1.16 2012/11/17 05:55:45 svnexp Exp $
#

PORTNAME=	getxml
PORTVERSION=	1.0.4
PORTREVISION=	1
CATEGORIES=	devel
MASTER_SITES=	http://www.gnu.org/software/toutdoux/source/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	An XML internationalization tool

LICENSE=	GPLv2 # (or later)

USE_GNOME=	glib12 libxml
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e "s,glib-config,${GLIB_CONFIG},g" ${WRKSRC}/configure

.include <bsd.port.mk>
