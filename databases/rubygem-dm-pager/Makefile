# Created by: Ryan Steinmetz <rpsfa@rit.edu>
# $FreeBSD: databases/rubygem-dm-pager/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	dm-pager
PORTVERSION=	1.1.0
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	DataMapper Pagination

RUN_DEPENDS=	rubygem-dm-aggregates>=0.10.1:${PORTSDIR}/databases/rubygem-dm-aggregates \
		rubygem-dm-core>=0.10.1:${PORTSDIR}/databases/rubygem-dm-core

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
