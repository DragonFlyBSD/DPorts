# $FreeBSD: x11-toolkits/rubygem-poppler/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	poppler
PORTVERSION=	2.0.2
CATEGORIES=	x11-toolkits rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Poppler

RUN_DEPENDS=	rubygem-gtk2>=${PORTVERSION}:${PORTSDIR}/x11-toolkits/rubygem-gtk2
LIB_DEPENDS=	poppler-glib:${PORTSDIR}/graphics/poppler-glib

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
