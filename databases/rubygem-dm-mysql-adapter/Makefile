# Created by: Jyun-Yan You <jyyou@cs.nctu.edu.tw>
# $FreeBSD: databases/rubygem-dm-mysql-adapter/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	dm-mysql-adapter
PORTVERSION=	1.2.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	MySQL Adapter for DataMapper

RUN_DEPENDS=	rubygem-do_mysql>=0.10.6:${PORTSDIR}/databases/rubygem-do_mysql \
		rubygem-dm-do-adapter>=${PORTVERSION}:${PORTSDIR}/databases/rubygem-dm-do-adapter

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
