# Created by: Steve Wills <swills@FreeBSD.org>
# $FreeBSD: devel/p5-Object-Authority/Makefile 332844 2013-11-05 12:56:03Z vanilla $

PORTNAME=	Object-AUTHORITY
PORTVERSION=	0.004
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module that adds an AUTHORITY method to your class

BUILD_DEPENDS=	p5-Object-Role>=0:${PORTSDIR}/devel/p5-Object-Role
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
