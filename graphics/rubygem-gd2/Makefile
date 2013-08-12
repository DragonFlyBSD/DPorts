# Ports collection makefile for:	rubygem-gd2
# Date created:				07 June 2007
# Whom:					Alexander Logvinov <ports@logvinov.com>
#
# $FreeBSD: graphics/rubygem-gd2/Makefile 324437 2013-08-09 14:05:52Z dinoex $

PORTNAME=	gd2
PORTVERSION=	1.1.1
PORTREVISION=	4
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby binding for Thomas Boutell's gd 2.x graphics library #'

LIB_DEPENDS=	gd:${PORTSDIR}/graphics/gd

REINPLACE_ARGS=	-i ""

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

post-install:
	@${REINPLACE_CMD} 's|so.2|so.4|' ${PREFIX}/${GEM_LIB_DIR}/lib/gd2.rb

.include <bsd.port.mk>
