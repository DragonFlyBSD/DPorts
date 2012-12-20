# New ports collection makefile for:	HTML::Template::Pluggable
# Date created:				21 March 2006
# Whom:					Espen Tagestad <espen@tagestad.no>
#
# $FreeBSD: ports/www/p5-HTML-Template-Pluggable/Makefile,v 1.10 2012/11/17 06:02:50 svnexp Exp $
#

PORTNAME=	HTML-Template-Pluggable
PORTVERSION=	0.17
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	lippe@FreeBSD.org
COMMENT=	Extends HTML::Template with plugin support

BUILD_DEPENDS=	p5-HTML-Template>=2.7:${PORTSDIR}/www/p5-HTML-Template \
		p5-Test-MockObject>=1:${PORTSDIR}/devel/p5-Test-MockObject \
		p5-Regexp-Common>=0:${PORTSDIR}/textproc/p5-Regexp-Common \
		p5-Class-Trigger>=0:${PORTSDIR}/devel/p5-Class-Trigger
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		HTML::Template::Pluggable.3 \
		HTML::Template::Plugin::Dot.3

.include <bsd.port.mk>
