# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: devel/p5-IPC-SharedCache/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	IPC-SharedCache
PORTVERSION=	1.3
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module for managing a SysV IPC shared memory cache

BUILD_DEPENDS=	p5-IPC-ShareLite>=0:${PORTSDIR}/devel/p5-IPC-ShareLite \
		p5-Storable>=0:${PORTSDIR}/devel/p5-Storable

RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		IPC::SharedCache.3

.include <bsd.port.mk>
