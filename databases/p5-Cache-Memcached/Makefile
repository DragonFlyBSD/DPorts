# Created by: michael johnson <ahze@ahze.net>
# $FreeBSD: databases/p5-Cache-Memcached/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Cache-Memcached
PORTVERSION=	1.30
CATEGORIES=	databases perl5
MASTER_SITES=	CPAN \
		http://www.danga.com/memcached/dist/
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl API for memcached, a distributed memory cache daemon

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-String-CRC32>0:${PORTSDIR}/devel/p5-String-CRC32
RUN_DEPENDS=	p5-String-CRC32>0:${PORTSDIR}/devel/p5-String-CRC32

USES=		perl5
USE_PERL5=	configure

MAN3=	Cache::Memcached.3

.include <bsd.port.mk>
