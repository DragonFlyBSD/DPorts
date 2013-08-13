# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: devel/p5-Class-Accessor-Fast-Contained/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Class-Accessor-Fast-Contained
PORTVERSION=	1.01
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Class
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Fast accessors with data containment

BUILD_DEPENDS=	p5-Class-Accessor>=0:${PORTSDIR}/devel/p5-Class-Accessor
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage \
		p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod

USES=		perl5
USE_PERL5=	configure

MAN3=	Class::Accessor::Fast::Contained.3

.include <bsd.port.mk>
