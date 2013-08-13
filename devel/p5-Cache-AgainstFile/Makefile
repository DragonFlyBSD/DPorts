# Created by: Eric Freeman <freebsdports@chillibear.com>
# $FreeBSD: devel/p5-Cache-AgainstFile/Makefile 324171 2013-08-02 18:21:05Z az $

PORTNAME=		Cache-AgainstFile
PORTVERSION=		1.016
CATEGORIES=		devel perl5
MASTER_SITES=		CPAN
MASTER_SITE_SUBDIR=	Cache
PKGNAMEPREFIX=		p5-

MAINTAINER=		ports@FreeBSd.org
COMMENT=		Cache data structures parsed from files, watching for updates

RUN_DEPENDS=	p5-Log-Trace>0:${PORTSDIR}/devel/p5-Log-Trace \
		p5-Test-Assertions>0:${PORTSDIR}/devel/p5-Test-Assertions
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Cache::AgainstFile::Memory.3 \
	Cache::AgainstFile.3 \
	Cache::AgainstFile::Storable.3 \
	Cache::AgainstFile::Null.3 \
	Cache::AgainstFile::Base.3 \
	Cache::AgainstFile::CacheModule.3

regression-test:
	cd ${WRKSRC} && ${MAKE} test

.include <bsd.port.mk>
