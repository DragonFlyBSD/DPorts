# Created by: Mikhail T. <michael@fun-box.ru>
# $FreeBSD: databases/rubygem-memcache/Makefile 332033 2013-10-30 02:26:17Z swills $

PORTNAME=	memcache
PORTVERSION=	1.4.1
CATEGORIES=	databases rubygems
MASTER_SITES=	RG

MAINTAINER=	ruby@FreeBSD.org
COMMENT=	Ruby bindings for libmemcached

LIB_DEPENDS=	memcached:${PORTSDIR}/databases/libmemcached

USE_RUBY=	yes
USE_RUBYGEMS=	yes
RUBYGEM_AUTOPLIST=	yes

GEM_ENV	+=EXTERNAL_LIB="YES"
CONFIGURE_ARGS=	"--with-opt-dir=${LOCALBASE}"

.include <bsd.port.mk>
