# Ports collection makefile for:	rubygem-chef-solr
# Date created:				13 Dec 2011
# Whom:					Scott Sanders <scott@jssjr.com>
#
# $FreeBSD: ports/sysutils/rubygem-chef-solr/Makefile,v 1.2 2012/11/17 06:01:44 svnexp Exp $
#

PORTNAME=	chef-solr
PORTVERSION=	0.10.8
CATEGORIES=	sysutils
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	A systems integration framework. Client part

RUN_DEPENDS=	rubygem-chef>=${PORTVERSION}:${PORTSDIR}/sysutils/rubygem-chef \
		apache-solr>=0:${PORTSDIR}/textproc/apache-solr

USE_RUBY=		yes
USE_RUBYGEMS=		yes
RUBYGEM_AUTOPLIST=	yes

PLIST_FILES=	bin/chef-solr \
		bin/chef-solr-installer

.include <bsd.port.mk>
