# Created by: ijliao
# $FreeBSD: devel/getxml/Makefile 327723 2013-09-20 17:04:43Z bapt $

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

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e "s,glib-config,${GLIB_CONFIG},g" ${WRKSRC}/configure

.include <bsd.port.mk>
