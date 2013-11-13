# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: devel/p5-IPC-SharedCache/Makefile 332028 2013-10-30 01:38:24Z vanilla $

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

.include <bsd.port.mk>
