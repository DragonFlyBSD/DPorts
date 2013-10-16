# Created by: ijliao
# $FreeBSD: graphics/rubygem-scruffy/Makefile 327733 2013-09-20 18:35:44Z bapt $

PORTNAME=	scruffy
PORTVERSION=	0.2.6
PORTREVISION=	1
CATEGORIES=	graphics rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Beautiful Graphs for Ruby

RUN_DEPENDS=	rubygem-builder>=2.0.0:${PORTSDIR}/devel/rubygem-builder

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST= yes

NO_STAGE=	yes
post-install:
	${REINPLACE_CMD} -e 's|#{options|0 0 #{options|' \
		${PREFIX}/${GEM_LIB_DIR}/lib/scruffy/renderers/base.rb
	grep options ${PREFIX}/${GEM_LIB_DIR}/lib/scruffy/renderers/base.rb

.include <bsd.port.mk>
