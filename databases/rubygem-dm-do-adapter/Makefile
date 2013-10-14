# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: databases/rubygem-dm-do-adapter/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	dm-do-adapter
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	DataObjects Adapter for DataMapper

RUN_DEPENDS=	rubygem-data_objects>=0.10.6:${PORTSDIR}/databases/rubygem-data_objects \
		rubygem-dm-core>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-core

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
