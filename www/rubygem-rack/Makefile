# $FreeBSD: www/rubygem-rack/Makefile 327776 2013-09-20 23:36:50Z bapt $

# XXX: If updating this port, please check compatibality with at least the following ports,
# XXX: preferably, the full rubygem-* tree.  rack version requirements are specified with ~>
# XXX: which requires *EXACTLY* that version.
#
# 	www/rubygem-actionpack
# 	www/rubygem-innate

PORTNAME=	rack
PORTVERSION=	1.4.5
PORTEPOCH=	3
CATEGORIES=	www rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Rack, a Ruby Webserver Interface

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes
PLIST_FILES=	bin/rackup

NO_STAGE=	yes
.include <bsd.port.mk>
