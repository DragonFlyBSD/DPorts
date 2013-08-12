# Created by: clsung@dragon2.net
# $FreeBSD: devel/p5-Tie-FileLRUCache/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Tie-FileLRUCache
PORTVERSION=	1.05
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Lightweight but robust filesystem based persistent LRU cache

BUILD_DEPENDS=	p5-Class-NamedParms>=0:${PORTSDIR}/devel/p5-Class-NamedParms \
		p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1 \
		p5-Class-ParmList>=0:${PORTSDIR}/devel/p5-Class-ParmList
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Tie::FileLRUCache.3

.include <bsd.port.mk>
