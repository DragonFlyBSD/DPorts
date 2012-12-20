# New ports collection makefile for:	p5-HTML-Template-Expr
# Date Created:				2001/11/28
# Whom:					nork@cityfujisawa.ne.jp
#
# $FreeBSD: ports/www/p5-HTML-Template-Expr/Makefile,v 1.14 2012/11/17 06:02:50 svnexp Exp $
#

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

PERL_CONFIGURE=	yes

MAN3=		HTML::Template::Expr.3

.include <bsd.port.mk>
