# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: devel/p5-Set-ConsistentHash/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Set-ConsistentHash
PORTVERSION=	0.92
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Set
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Library for doing consistent hashing

BUILD_DEPENDS=	p5-Digest-SHA1>=0:${PORTSDIR}/security/p5-Digest-SHA1
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Set::ConsistentHash.3

.include <bsd.port.mk>
