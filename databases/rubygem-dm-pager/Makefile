# New ports collection makefile for:	rubygem-dm-pager
# Date created:		2011-06-16
# Whom:			Ryan Steinmetz <rpsfa@rit.edu>
#
# $FreeBSD: ports/databases/rubygem-dm-pager/Makefile,v 1.4 2012/11/17 05:55:24 svnexp Exp $
#

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

.include <bsd.port.mk>
