# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: databases/rubygem-dm-core/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	dm-core
PORTVERSION=	1.2.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	An Object/Relational Mapper for Ruby

RUN_DEPENDS=	rubygem-extlib>=0.9.15:${PORTSDIR}/devel/rubygem-extlib \
		rubygem-addressable>=2.3:${PORTSDIR}/www/rubygem-addressable

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
