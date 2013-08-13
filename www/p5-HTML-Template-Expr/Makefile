# Created by: nork@cityfujisawa.ne.jp
# $FreeBSD: www/p5-HTML-Template-Expr/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	HTML-Template-Expr
PORTVERSION=	0.07
PORTREVISION=	1
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to use HTML Templates which allows expressions

RUN_DEPENDS=    p5-HTML-Template>=2.4:${PORTSDIR}/www/p5-HTML-Template \
		p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
BUILD_DEPENDS=  ${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		HTML::Template::Expr.3

.include <bsd.port.mk>
