# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: databases/p5-Cache-Memcached-XS/Makefile 332592 2013-11-03 06:53:54Z vanilla $

PORTNAME=	Cache-Memcached-XS
PORTVERSION=	0.01
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Client library for memcached using libmemcache

LIB_DEPENDS=	memcache.4:${PORTSDIR}/databases/libmemcache
BUILD_DEPENDS=	p5-Storable>=0:${PORTSDIR}/devel/p5-Storable
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
CONFIGURE_ARGS=	INC="-I${LOCALBASE}/include"

.include <bsd.port.mk>
