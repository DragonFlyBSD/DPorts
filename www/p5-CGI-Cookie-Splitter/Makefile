# Created by: ijliao
# $FreeBSD: www/p5-CGI-Cookie-Splitter/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	CGI-Cookie-Splitter
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Split big cookies into smaller ones

BUILD_DEPENDS=	p5-CGI-Simple>=0:${PORTSDIR}/www/p5-CGI-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-use-ok>=0:${PORTSDIR}/devel/p5-Test-use-ok

USES=		perl5
USE_PERL5=	configure

MAN3=	CGI::Cookie::Splitter.3

NO_STAGE=	yes
.include <bsd.port.mk>
