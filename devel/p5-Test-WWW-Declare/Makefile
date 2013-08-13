# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/p5-Test-WWW-Declare/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Test-WWW-Declare
PORTVERSION=	0.02
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Declarative testing for your web app

BUILD_DEPENDS=	p5-Test-WWW-Mechanize>=0:${PORTSDIR}/devel/p5-Test-WWW-Mechanize
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Tester>=0:${PORTSDIR}/devel/p5-Test-Tester

USES=		perl5
USE_PERL5=	configure

MAN3=	Test::WWW::Declare.3

.include <bsd.port.mk>
