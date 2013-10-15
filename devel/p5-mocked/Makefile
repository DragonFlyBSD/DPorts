# Created by: Lars Thegler <lth@FreeBSD.org>
# $FreeBSD: devel/p5-mocked/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	mocked
PORTVERSION=	0.09
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:LUKEC
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	mocked - use mocked libraries in unit tests

BUILD_DEPENDS=	p5-URI>=0:${PORTSDIR}/net/p5-URI
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Exception>0:${PORTSDIR}/devel/p5-Test-Exception

USES=		perl5
USE_PERL5=	configure

MAN3=	mocked.3 \
	unmocked.3

NO_STAGE=	yes
.include <bsd.port.mk>
