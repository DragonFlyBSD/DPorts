# New ports collection makefile for:	rubygem-dm-mysql-adapter
# Date created:		2010-09-10
# Whom:			Jyun-Yan You <jyyou@cs.nctu.edu.tw>
#
# $FreeBSD: ports/databases/rubygem-dm-mysql-adapter/Makefile,v 1.5 2012/11/17 05:55:24 svnexp Exp $
#

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

.include <bsd.port.mk>
