# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/devel/p5-Test-WWW-Declare/Makefile,v 1.5 2012/11/17 05:56:34 svnexp Exp $

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

PERL_CONFIGURE=	yes

MAN3=	Test::WWW::Declare.3

.include <bsd.port.mk>
