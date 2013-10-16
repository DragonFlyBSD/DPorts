# Created by: Andrey Kostenko <andrey@kostenko.name>
# $FreeBSD: devel/p5-Cache-Memcached-Tie/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Cache-Memcached-Tie
PORTVERSION=	0.09
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Use Cache::Memcached::Fast like hash

BUILD_DEPENDS=	p5-Cache-Memcached-Fast>=0:${PORTSDIR}/databases/p5-Cache-Memcached-Fast
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAN3=		Cache::Memcached::Tie.3

NO_STAGE=	yes
.include <bsd.port.mk>
