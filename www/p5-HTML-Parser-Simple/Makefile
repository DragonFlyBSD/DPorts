# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: ports/www/p5-HTML-Parser-Simple/Makefile,v 1.3 2012/12/05 03:23:45 svnexp Exp $

PORTNAME=	HTML-Parser-Simple
PORTVERSION=	2.00
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-
EXTRACT_SUFX=	.tgz

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Parse nice HTML files without needing a compiler

LICENSE=	ART10

BUILD_DEPENDS=	p5-Moos>=0.13:${PORTSDIR}/devel/p5-Moos \
		p5-Tree-Simple>=0:${PORTSDIR}/devel/p5-Tree-Simple
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-Pod>=0:${PORTSDIR}/devel/p5-Test-Pod

PERL_CONFIGURE=	yes

MAN3=		HTML::Parser::Simple.3 \
		HTML::Parser::Simple::Attributes.3 \
		HTML::Parser::Simple::Reporter.3

.include <bsd.port.mk>
