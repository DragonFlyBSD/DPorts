# Created by: kevit
# $FreeBSD: devel/p5-Class-Declare/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Class-Declare
PORTVERSION=	0.17
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	simarg@gmail.com
COMMENT=	Perl module for declare classes

BUILD_DEPENDS=	p5-Test-Exception>=0:${PORTSDIR}/devel/p5-Test-Exception
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAN3=	Class::Declare::Dump.3 Class::Declare.3 Class::Declare::Hash.3

NO_STAGE=	yes
.include <bsd.port.mk>
