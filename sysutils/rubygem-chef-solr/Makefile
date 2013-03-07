# Created by: Scott Sanders <scott@jssjr.com>
# $FreeBSD: sysutils/rubygem-chef-solr/Makefile 313021 2013-02-27 02:18:10Z swills $

PORTNAME=	chef-solr
PORTVERSION=	10.24.0
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
